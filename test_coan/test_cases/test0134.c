/**ARGS: source -E -DFOO1 -UFOO2 */
/**SYSCODE: = 1 | 16 */
#if defined(FOO1) || 0
KEEP ME
#else
DELETE ME
#endif
