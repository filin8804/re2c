// re2c $INPUT -o $OUTPUT -i --flex-syntax
/*!re2c
    re2c:flags:posix-captures = 1;

    (ab|a|c|bcd){1,}(d*)
    {}
    "" {}
*/
