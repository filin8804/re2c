// re2c $INPUT -o $OUTPUT -i
/*!re2c
    [^a]* ("aa"|"a") { 0 }
    [^]              { 1 }
*/

/*!re2c
    [^a]* "a"{1,3} { 0 }
    [^]            { 1 }
*/

/*!re2c
    [^a]* "a"? { 0 }
    [^]        { 1 }
*/

/*!re2c
    [^a]* "a"+ { 0 }
    [^]        { 1 }
*/
