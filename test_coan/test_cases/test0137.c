/**ARGS: source -DFOO1 -UFOO2 */
/**SYSCODE: = 1 | 16 */
#if defined(FOO2) || 0
DELETE ME
#else
KEEP ME
#endif
