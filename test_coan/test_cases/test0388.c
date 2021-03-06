/**ARGS: source -DLLONG_MAX=9223372036854775807LL */
/**SYSCODE: = 16 | 2 | 1 */
/* True iff "long long" is at least B bits.  This presumes that (B-2)/3 is at
   most 63.  */
#define LLONG_AT_LEAST(B)			\
	(LLONG_MAX >> ((B)-2)/3 >> ((B)-2)/3	\
	 >> ((B)-2 - ((B)-2)/3 - ((B)-2)/3))

#if LLONG_AT_LEAST(65)
DELETE_ME
#else
KEEP_ME
#endif

