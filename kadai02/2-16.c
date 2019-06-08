#include <stdio.h>

void mul(int l[][3], int r[][2], int a[][2], int n)
{
  int i,j;

	for (i = 0; i < n; i++) {
	  for(j=0;j<2;j++)
		a[i][j] = l[i][0] * r[0][j] + l[i][1] * r[1][j] + l[i][2] * r[2][j];
	}
	for(i=0;i<n;i++){
	  for(j=0;j<2;j++)
	    printf("%d ",a[i][j]);
	printf("\n");
	}
}

int main(void)
{
  int a[][3]={{0,0,0},{0,0,0}};
  int b[][2]={{0,0},{0,0},{0,0}};
  int c[][2]={{0,0},{0,0}};
  int i,j;

  for(j=0;j<2;j++){
	for (i = 0; i<3; i++)
		scanf("%d", &a[j][i]);
  }
  for(j=0;j<3;j++){
	for (i = 0; i<2; i++)
		scanf("%d", &b[j][i]);
  }

  mul(a,b, c, 2);

	return 0;
}
