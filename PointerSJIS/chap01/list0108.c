/* �|�C���^�̏����� */

#include <stdio.h>

int main(void)
{
	int n = 123;	/* n�̒l��123 */
	int *p = &n;	/* p��n���w���|�C���^ */

	printf(" n�̒l��%d\n",  n);		/* n�̒l */
	printf("*p�̒l��%d\n", *p);		/* p���w���I�u�W�F�N�g�̒l */

	return 0;
}
