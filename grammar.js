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
        seq($.comment, $._newline),

        // NOTE: lack of this rule makes several useless ERROR nodes.
        //       For now, I'm not sure how to avoid that, also ensures section_body
        //       can capture empty lines correctly.
        // $.line_only_spaces,
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
      $._newline,
    ),
    section_body: $ => prec.right(2, repeat1(
      choice(
        seq(
          $._INDENT,
          choice(
            $.entry,
            $.comment,
            // $.group,
          ),
          $._newline,
        ),
        $._line_only_spaces,
      ),
    )),

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
      $._newline,
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

    key_type: $ => /[a-zA-Z0-9_\-\.]+/,
    value_type: $ => /[^\r\n]+/,   // TODO: multiple value

    _newline: $ => /\r?\n/,
    _line_only_spaces: $ => / *\r?\n/,
    _INDENT: $ => '    ',   // 4 spaces
    _WS: $ => / +/,         // only space

    comment: $ => token(seq('#', /.*/)),
  },
});
