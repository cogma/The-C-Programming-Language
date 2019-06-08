#include <stdio.h>

int main(void)
{
  int a[2][3] = { { 0,0,0 },{ 0,0,0 } };
  int b[3][2] = { { 0,0 },{ 0,0 },{ 0,0 } };
  int c[2][2];
  int i,j;

        for(i=0;i<2;i++){
	for (j = 0; j<3; j++)
		scanf("%d", &a[i][j]);
  }
  for(i=0;i<3;i++){
	for (j = 0; j<2; j++)
		scanf("%d", &b[i][j]);
  }

  for (i = 0; i < 2; i++) {
		c[i][0] = a[i][0] * b[0][0] + a[i][1] * b[1][0] + a[i][2] * b[2][0];
		c[i][1] = a[i][0] * b[0][1] + a[i][1] * b[1][1] + a[i][2] * b[2][1];
   }

	for(i=0;i<2;i++){
	  for(j=0;j<2;j++)
	    printf("%d ",c[i][j]);
	printf("\n");
	}

	return 0;
}
