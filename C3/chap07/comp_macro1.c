/*
	�}�N���ɂ���č\���̂ɖ��O��^����i���̂P�F�G���[�j
*/

#define complex  struct { double re, im; }

int main(void)
{
	complex a, b;
	complex x, y;

	a = b;		/* �� */
	x = b;		/* �s���i�R���p�C���G���[�j */

	return 0;
}
