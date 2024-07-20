/**
 * Schema Reference
 * - https://docs.fluentbit.io/manual/administration/configuring-fluent-bit/classic-mode/format-schema
 * - https://github.com/chronosphereio/calyptia-fluent-bit-config-parser/blob/01349de7128eaf20ff4aa518502b853984c4c72f/src/parser.ts#L233
 */

module.exports = grammar({
  name: 'fluentbit',

  extras: $ => [
    /\r?\n/,
  ],

  rules: {
    config: $ => repeat(
      choice(
        $._config_block,
        optional($.comment),
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
    ),
    section_body: $ => repeat(
      seq(
        $._INDENT,
        choice(
          $.entry,
          $.comment,
          // $.group,
        ),
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
    ),

    directive_set: $ => seq('SET', $._WS, $._assign_expr),
    directive_include: $ => seq('INCLUDE', $._WS, field('pattern', $.value_type)),

    /***************************************************************************
     * Commons
     **************************************************************************/
    _assign_expr: $ => seq(
      field('key', $.key_type),
      optional($._WS),
      '=',
      optional($._WS),
      field('value', $.value_type),
    ),
    entry: $ => seq(
      field('key', $.key_type),
      $._WS,
      field('value', $.value_type),
    ),

    section_header_type: $ => /[a-zA-Z0-9_]+/,

    key_type: $ => /[a-zA-Z0-9_\.]+/,
    value_type: $ => /[^\n]+/,   // TODO: multiple value

    // newline: $ => /\r?\n/,
    _INDENT: $ => '    ',   // 4 spaces
    _WS: $ => / +/,         // only space

    comment: $ => token(seq('#', /.*/)),
  },
});
