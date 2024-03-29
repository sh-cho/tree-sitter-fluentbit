module.exports = grammar({
  name: 'fluentbit',

  extras: $ => [],

  // https://docs.fluentbit.io/manual/administration/configuring-fluent-bit/classic-mode/format-schema
  rules: {
    config: $ => repeat(
      choice(
        $._config_block,
        seq(optional($._comment), $._LF),
      ),
    ),

    _config_block: $ => choice(
      $.section,
      $.meta,
    ),

    /***************************************************************************
     * Section
     **************************************************************************/
    section: $ => seq(
      field('header', $.section_header),
      field('body', $.section_body),
    ),

    section_header: $ => seq(
      '[', field('name', $.section_header_type), ']',
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

    meta_set: $ => seq('SET', $._WS, $._assign_expr),
    meta_include: $ => seq('INCLUDE', $._WS, field('pattern', $.value_type)),

    /***************************************************************************
     * Commons
     **************************************************************************/
    _assign_expr: $ => seq(
      field('key', $.identifier),
      '=',
      field('value', $.value_type),
    ),
    entry: $ => seq(
      field('key', $.identifier),
      $._WS,
      field('value', $.value_type),
    ),

    identifier: $ => /[a-zA-Z0-9_]+/,
    section_header_type: $ => /[a-zA-Z0-9_\.]+/,
    value_type: $ => /[^\n]+/,   // TODO: multiple value

    _LF: $ => '\n',
    _INDENT: $ => '    ',   // 4 spaces
    _WS: $ => / +/,         // only space

    _comment: $ => /#[^\n]+/,
  },
});
