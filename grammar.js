module.exports = grammar({
  name: 'fluentbit',

  extras: $ => [],

  // https://docs.fluentbit.io/manual/administration/configuring-fluent-bit/classic-mode/format-schema
  rules: {
    config_file: $ => repeat(
      choice(
        $.config_block,
        seq(optional($._comment), $._LF),
      ),
    ),

    config_block: $ => choice(
      $.section,
      $.meta,
    ),

    /***************************************************************************
     * Section
     **************************************************************************/
    section: $ => seq(
      $.section_header,
      $.section_body,
    ),

    section_header: $ => seq(
      '[', field('name', $.identifier), ']',
      $._LF,
    ),
    section_body: $ => repeat1(
      seq(
        $._INDENT,
        choice(
          $.entry,
          $._comment,
          // $.group,
        ),
        $._LF,
      ),
    ),

    // TODO: group

    /***************************************************************************
     * Meta
     **************************************************************************/
    meta: $ => seq(
      '@',
      choice(
        $.meta_set,
        $.meta_include,
      ),
      $._LF
    ),

    meta_set: $ => seq('SET', $._WS, $.assign_expr),
    meta_include: $ => seq('INCLUDE', $._WS, alias($.value, 'path')),

    assign_expr: $ => seq(
      field('key', $.identifier),
      '=',
      field('value', $.value),
    ),
    entry: $ => seq(
      field('key', $.identifier),
      $._WS,
      field('value', $.value),
    ),

    identifier: $ => /[a-zA-Z0-9_]+/,
    value: $ => /[^\n]+/,   // TODO: multiple value

    _LF: $ => '\n',
    _INDENT: $ => '    ',   // 4 spaces
    _WS: $ => / +/,         // only space

    _comment: $ => /#[^\n]+/,
  },
});
