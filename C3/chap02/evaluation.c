/*
	�֌W������ѓ�������]�������l��\��
*/

#include <stdio.h>

int main(void)
{
	int nx, ny;

	printf("nx�̒l�F");   scanf("%d", &nx);
	printf("ny�̒l�F");   scanf("%d", &ny);

	printf("nx <  ny : %d\n", nx <  ny);
	printf("nx <= ny : %d\n", nx <= ny);
	printf("nx >  ny : %d\n", nx >  ny);
	printf("nx >= ny : %d\n", nx >= ny);
	printf("nx == ny : %d\n", nx == ny);
	printf("nx != ny : %d\n", nx != ny);

	return 0;
}
