/*
	�֐��ďo���ƈ����̕ϊ��i�Â��X�^�C���j
*/

#include <stdio.h>

void iprint(), lprint(), fprint(), dprint();

main()
{
	int    a = 10000;
	long   b = 40000;
	float  c = 50000;
	double d = 60000;
							/*		 �������������� */
	puts("-- a(int) --");
	iprint(a);				/* (1) �� int �� int 	*/
	lprint(a);				/* (2) �� int �� long	*/

	puts("\n-- b(long) --");
	iprint(b);				/* (3) �� long �� int	*/
	lprint(b);				/* (4) �� long �� long	*/

	puts("\n-- c(float) --");
	fprint(c);				/* (5) �� float �� float  */
	dprint(c);				/* (6) �� float �� double */

	puts("\n-- d(double) --");
	fprint(d);				/* (7) �� double �� float  */
	dprint(d);				/* (8) �� double �� double */
}

/*--- int�����̒l���o�� ---*/
void iprint(x)
int x;
{
	printf("iprint -> %d\n", x);
}

/*--- long�����̒l���o�� ---*/
void lprint(x)
long x;
{
	printf("lprint -> %ld\n", x);
}

/*--- float�����̒l���o�� ---*/
void fprint(x)
float x;
{
	printf("fprint -> %.1f\n", x);
}

/*--- double�����̒l���o�� ---*/
void dprint(x)
double x;
{
	printf("dprint -> %.1f\n", x);
}