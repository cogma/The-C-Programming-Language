/* �\���̃����o�̃A�h���X��\�� */

#include <stdio.h>

int main(void)
{
	struct xyz {
		int    x;
		long   y;
		double z;
	} a;

	printf("&a   = %p\n", &a  );	/* a�̃A�h���X��\�� */
	printf("&a.x = %p\n", &a.x);	/* a�̃����ox�̃A�h���X��\�� */
	printf("&a.y = %p\n", &a.y);	/* a�̃����oy�̃A�h���X��\�� */
	printf("&a.z = %p\n", &a.z);	/* a�̃����oz�̃A�h���X��\�� */

	return 0;
}
