/**
 * Schema Reference
 * - https://docs.fluentbit.io/manual/administration/configuring-fluent-bit/classic-mode/format-schema
 * - https://github.com/chronosphereio/calyptia-fluent-bit-config-parser/blob/01349de7128eaf20ff4aa518502b853984c4c72f/src/parser.ts#L233
 */

module.exports = grammar({
  name: 'fluentbit',

  extras: $ => [],

  rules: {
    config: $ => repeat(
      choice(
        $._config_block,
        seq(optional($._comment), $._LF),
      ),
    ),

    _config_block: $ => choice(
      $.section,
      $.directive,
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
     * Directives
     **************************************************************************/
    directive: $ => seq(
      '@',
      choice(
        $.directive_set,
        $.directive_include,
      ),
      $._LF
    ),

    directive_set: $ => seq('SET', $._WS, $._assign_expr),
    directive_include: $ => seq('INCLUDE', $._WS, field('pattern', $.value_type)),

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
