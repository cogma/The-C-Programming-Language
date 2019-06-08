#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define SIZE 1000
 
void init(char a[][100], int j)
{
    int i;
    for (i = 0; i < j; i++) {
        a[i][0] = '\0';
    }
}
 
void puta(char a[][100], int j)
{
    int i;
    for (i = 0; i < j; i++) {
        printf("%s\n", a[i]);
    }
}

char *find_pivot(char a[][100],int i,int j)
{
  if(j<i+1)
    return NULL;
  else if(strcmp(a[i],a[i+1])<0)
    return a[i+1];
  else if(strcmp(a[i],a[i+1])>0)
    return a[i];
  else
    return find_pivot(a,i+1,j);
}

void swap(char a[][100],int l,int r)
{
  char temp[100];

  strcpy(temp,a[l]);
  strcpy(a[l],a[r]);
  strcpy(a[r],temp);
}

int partition(char a[][100],int l,int r,char *pivot)
{
  int l2=l;
  int r2=r;

  while(1){
    while(strcmp(a[l],pivot)<0 && l<=r2){
      l=l+1;
    }
    
    while(strcmp(a[r],pivot)>=0 && r>=l2){
      r=r-1;
    }
    
    if(l>r)
      return l;
    else swap(a,l,r);
  }
}
 
void my_qsort(char a[][100], int i, int j)
{
  if (i>=j)
    return;
  else{
    char *pivot=malloc(100);
    if(find_pivot(a,i,j)==NULL)
      return;
    else {
      strcpy(pivot,find_pivot(a,i,j));
      int k=partition(a,i,j,pivot);

      free(pivot);
  
      my_qsort(a,i,k-1);
      my_qsort(a,k,j);
    }
  }
}
 
void my_sort(char a[][100], int n)
{
    my_qsort(a, 0, n);
}
 
int main(int argc, char *argv[])
{
    char a[SIZE][100];
    int j;
 
    init(a, SIZE);
 
    for (j = 0; j < SIZE; j++) {
        if (scanf("%99s", a[j]) == EOF) break;
    }

    my_sort(a, j-1);

    puta(a,j);
 
    return 0;
}
