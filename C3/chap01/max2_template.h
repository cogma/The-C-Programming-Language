/*
	関数テンプレートによるmax2を定義するヘッダ（Ｃ／Ｃ++）
*/

#ifdef __cplusplus											/* Ｃ++ */
	template <typename Type> Type max2(const Type& a, const Type& b)
	{
		return a > b ? a : b;
	}
#else														/* Ｃ */
	#define max2(a, b)	((a) > (b) ? (a) : (b))
#endif
