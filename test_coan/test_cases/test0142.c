/**ARGS: source -E -DFOO1 -UFOO2 */
/**SYSCODE: = 1 | 32 */
#if 0 || defined(UNKNOWN)
KEEP ME
#else
KEEP ME
#endif
