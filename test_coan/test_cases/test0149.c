/**ARGS: source -DFOO1 */
/**SYSCODE: = 1 | 16 */
#ifdef FOO1
/* To be parsed as comment
#ifdef FOO1
" To be parsed as quote
#ifndef FOO1
KEEP ME
#endif
End quote "
#endif
End comment */
#endif
