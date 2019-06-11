/*
	ŠÖ”‘½d’è‹`‚É‚æ‚émax2‚ð’è‹`‚·‚éƒwƒbƒ_i‚b^‚b++j
*/

#ifdef __cplusplus											/* ‚b++ */
	inline int    max2(int    a, int    b) { return a > b ? a : b; }
	inline long   max2(long   a, long   b) { return a > b ? a : b; }
	inline double max2(double a, double b) { return a > b ? a : b; }
#else														/* ‚b */
	#define max2(a, b)	((a) > (b) ? (a) : (b))
#endif
