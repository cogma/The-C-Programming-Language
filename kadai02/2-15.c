#include <stdio.h>

void reverse(int a[], int n)
{
	int i, b;

	for (i = 0; i < n / 2; i++) {
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}

}

int main(int argc, char *argv[])
{
	int a[5] = { 0, 0, 0, 0, 0 };
	int i;

	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	reverse(a, 5);

	for (i = 0; i < 5; i++)
		printf("%d\n", a[i]);

	return 0;
}
  
