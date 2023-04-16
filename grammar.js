module.exports = grammar({
    name: 'JSON',
    rules: {
        source_file: $ => $.main_obj,

        main_obj: $ => seq(
            '{',
            $.key_pair_list,
            '}',
        ),

        key_pair_list:  $ => repeat1($.key_pair),

        key_pair: $ => seq(
            '"',
            $.name,
            '"',
            ':',
            '{',
            $.value,
            '}',
        ),


        value: $ => choice (
            $.number,
            $.string,
        ),

        name: $ => /[a-z]+/,
        number: $ => /\d+/,
        string: $ => /"[a-zA-Z]+"/,

    },

});

