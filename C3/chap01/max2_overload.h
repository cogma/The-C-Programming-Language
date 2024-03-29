/*
	関数多重定義によるmax2を定義するヘッダ（Ｃ／Ｃ++）
*/

#ifdef __cplusplus											/* Ｃ++ */
	inline int    max2(int    a, int    b) { return a > b ? a : b; }
	inline long   max2(long   a, long   b) { return a > b ? a : b; }
	inline double max2(double a, double b) { return a > b ? a : b; }
#else														/* Ｃ */
	#define max2(a, b)	((a) > (b) ? (a) : (b))
#endif
