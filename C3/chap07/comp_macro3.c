/*
	�}�N���ɂ���č\���̂ɖ��O��^����i���̂R�F�G���[�j
*/

struct __comp { double re, im; };

#define complex  struct __comp
#define compptr  struct __comp *

int main(void)
{
	complex a, b;
	compptr pa, pb; 

	pa = &a;			/* ���@ */
	pb = &b;			/* �s�� */

	return 0;
}
