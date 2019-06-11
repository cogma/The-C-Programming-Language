/*
	�֐��e���v���[�g�ɂ��max2���`����w�b�_�i�b�^�b++�j
*/

#ifdef __cplusplus											/* �b++ */
	template <typename Type> Type max2(const Type& a, const Type& b)
	{
		return a > b ? a : b;
	}
#else														/* �b */
	#define max2(a, b)	((a) > (b) ? (a) : (b))
#endif
