module.exports = grammar({
    name: 'JSON',
    rules: {
        source_file: $ => seq(
            '{',
            $.key_pair_list,
            '}',
        ),

        key_pair_list:  $ => repeat1($.key_pair),

        key_pair: $ => seq(
            $.string,
            ':',
            $.value,
        ),


        value: $ => choice (
            $.key_pair,
            $.number,
            $.string,
            $.array,
            $.object,
        ),

        array: $ => seq(
            '[',
            repeat(
                seq(
                    $.value,
                    ','
                ),
            ),
            $.value,
            ']',
        ),

        object: $ => seq(
            '{',
            repeat(
                seq(
                    $.value,
                    ','
                ),
            ),
            $.value,
            '}',
        ),

        number: $ => /\d+/,
        string: $ => /"[a-zA-Z_]+"/,

    },

});

