/**ARGS: source -D c=0  */
/**SYSCODE: = 32 | 1  */
// Test preservation of indentation
#if( a )
	#if( b && !c )
		#define X		1
	#else
		#define X		2
	#endif
#endif

