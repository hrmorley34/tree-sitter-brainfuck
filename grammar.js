module.exports = grammar({
  name: 'brainfuck',

  rules: {
    source_file: $ => seq(optional($.initial_comment), repeat($._any)),

    initial_comment: $ => prec.right(repeat1(prec(10, choice($.initial_comment_loop, $._comment)))),
    initial_comment_loop: $ => prec(10, seq('[', repeat(choice($.initial_comment_loop, /[^\[\]]+/)), ']')),

    _any: $ => choice($.loop, $._command, $._comment),
    loop: $ => seq('[', repeat($._any), ']'),
    _command: $ => choice($.pointerleft, $.pointerright, $.memoryadd, $.memorysubtract, $.memoryinput, $.memoryoutput),
    pointerleft: $ => '<',
    pointerright: $ => '>',
    memoryadd: $ => '+',
    memorysubtract: $ => '-',
    memoryinput: $ => ',',
    memoryoutput: $ => '.',

    _comment: $ => /[^<>+\-\[\],.]+/,
  }
});
