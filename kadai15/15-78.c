#include<stdio.h>
#include<string.h>

typedef struct heap{
    int cost;
    char name[100];
}heap;

heap costs[1000];
int heap_last=0;

void swap(heap a[], int i, int j)
{
    heap temp;

	temp.cost = a[i].cost;
	a[i].cost = a[j].cost;
	a[j].cost = temp.cost;
    strcpy(temp.name,a[i].name);
    strcpy(a[i].name,a[j].name);
    strcpy(a[j].name,temp.name);
}

void insert(heap h[], int cost, char *name)
{
	int i;

	h[heap_last].cost = cost;
    strcpy(h[heap_last].name, name);

	i = heap_last;
	while (i > 0 && h[(i - 1) / 2].cost >= h[i].cost) {
		swap(h, i, (i - 1) / 2);
		i = (i - 1) / 2;
	}
    heap_last++;
}

int main(int argc, char *argv[])
{
    char names[1000][100]; 
    int s=2;
    int i=0;
    char string1[100];
    char string2[100];
    int goal=2;
    int cost;

    scanf("%99s",names[0]);
    scanf("%99s",names[1]);
    strcpy(names[goal], "");
    insert(costs, 2147483647, names[goal]);

    while(scanf("%99s",string1)!=EOF){
        scanf("%99s",string2);
        scanf("%d",&cost);
        if(strcmp(string1, names[0])==0){
            for(i=1; i<s; i++){
                if(strcmp(string2,names[i])==0){
                    goal=i;
                    i=s-1;
                    insert(costs, cost, names[goal]);
                }
            }
            if(i==s){
                strcpy(names[s],string2);
                goal=s;
                s++;
                insert(costs, cost, names[goal]);
            }
        }
        else{
            if(strcmp(string2, names[0])==0){
                for(i=1; i<s; i++){
                    if(strcmp(string1,names[i])==0){
                        goal=i;
                        i=s-1;
                        insert(costs, cost, names[goal]);
                    }
                }
                if(i==s){
                    strcpy(names[s],string1);
                    goal=s;
                    s++;
                    insert(costs, cost, names[goal]);
                }
            }
        }
    }

    if(costs[0].cost==2147483647 && strcmp(costs[0].name, "")==0){
        printf("%s\n", names[0]);
    }
    else{
        printf("%s\n", costs[0].name);
    }

    return 0;
}