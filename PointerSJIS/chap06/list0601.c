/* �\���̂̃����o�ɒl�������ĕ\�� */

#include <stdio.h>

int main(void)
{
	struct xyz {		/* �^�O��xyz�̍\���� */
		int    x;		/* int   �^�̃����o */
		long   y;		/* long  �^�̃����o */
		double z;		/* double�^�̃����o */
	};

	struct xyz a;		/* struct xyz�^�̃I�u�W�F�N�g */

	a.x = 57;						/* �����o�ɒl���� */
	a.y = 123456789L;				/* �@�V�@ */
	a.z = 3.14;						/* �@�V�@ */

	printf("a.x = %d\n",   a.x);	/* �����o�̒l��\�� */
	printf("a.y = %ld\n",  a.y);	/* �@�V�@ */
	printf("a.z = %.2f\n", a.z);	/* �@�V�@ */

	return 0;
}
