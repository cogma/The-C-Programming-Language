#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct aaa heap;
struct aaa{
    int cost;
    char name[100];
    heap *last;
};

typedef struct data{
    char start[100];
    char goal[100];
    int cost;
}data;

data d[1000];
heap *costs[1000];
int costs_fs[1000]={0};
int heap_last=0;
char names[1000][100]; 
int s=2;
int sum=0;
int route=0;
char routes[1000][100];

heap *heap_empty()
{
   heap *l;
   l=malloc(sizeof(heap));
   if(l!=NULL){
     l->last=NULL;
   }
   return l;
}

void swap(heap *a[], int i, int j)
{
    heap *temp;
    temp=heap_empty();

	temp->cost = a[i]->cost;
	a[i]->cost = a[j]->cost;
	a[j]->cost = temp->cost;
    strcpy(temp->name,a[i]->name);
    strcpy(a[i]->name,a[j]->name);
    strcpy(a[j]->name,temp->name);
    temp->last = a[i]->last;
    a[i]->last = a[j]->last;
	a[j]->last = temp->last; 

    free(temp);
}

void insert(heap *h[], int cost, char name[100], heap *las)
{
	int i;
    heap *hh=heap_empty();

    hh->cost=cost;
    strcpy(hh->name, name);
    hh->last=las;

    h[heap_last]=hh;

	i = heap_last;
	while (i > 0 && h[(i - 1) / 2]->cost > h[i]->cost) {
		swap(h, i, (i - 1) / 2);
		i = (i - 1) / 2;
	}
    heap_last++;
}

heap *deletemin(heap *costs[], int count)
{
	int i = 0;
    int j = 0;
	heap *object;
    heap *empty=heap_empty();
    strcpy(empty->name, "");
    empty->cost=2147483647;

    if(heap_last<=0){
        return empty;
    }

    object = costs[0];
    costs[0]=costs[heap_last-1];
    costs[heap_last-1]=empty;

    while (i < (heap_last-1) / 2 && (costs[i]->cost > costs[2 * i + 1]->cost || costs[i]->cost > costs[2 * i + 2]->cost)) {
		if (costs[i]->cost > costs[2 * i + 1]->cost) {
			if (costs[2 * i + 2]->cost > costs[2 * i + 1]->cost) {
				swap(costs, i, 2 * i + 1);
				i = 2 * i + 1;
			}
			else {
				swap(costs, i, 2 * i + 2);
				i = 2 * i + 2;
			}
		}
		else if (costs[i]->cost > costs[2 * i + 2]->cost) {
			swap(costs, i, 2 * i + 2);
			i = 2 * i + 2;
		}
	}

    heap_last--;

    for(j=0; j<count; j++){
        if(strcmp(object->name, names[j])==0){
            return deletemin(costs, count);
        }
    }
    
    return object;
}

void insert_data(data d[], int i, char *string1, char *string2, int cost)
{
    d[i].cost=cost;
    strcpy(d[i].start, string1);
    strcpy(d[i].goal, string2);
}

void printcopy(int i, heap *h)
{
    strcpy(routes[i], h->name);
    route++;

    if(strcmp(names[0], h->name)!=0){
        printcopy(i+1, h->last);
    }
}

void loop(int count, heap *h, char goal[])
{
    int i=0;
    int j=0;
    int goal2;
    heap *object;

    for(j=0; j<sum; j++){
        if(strcmp(d[j].start, h->name)==0){

            for(i=0; i<s; i++){
                if(strcmp(d[j].goal, names[i])==0){

                    if(i>=count){

                        goal2=i;
                        i=s+1;

                        if(costs_fs[goal2]>d[j].cost+costs_fs[count-1]||costs_fs[goal2]<1){
                            costs_fs[goal2]=d[j].cost+costs_fs[count-1];

                            insert(costs, costs_fs[goal2], names[goal2], h);
                        }
                    }
                    else{
                        i=s+1;
                    }
                }
            }
            if(i==s){
                strcpy(names[s],d[j].goal);
                goal2=s;

                costs_fs[s]=d[j].cost+costs_fs[count-1];

                s++;

                insert(costs, costs_fs[goal2], names[goal2], h);
            }
        }
        else{
            if(strcmp(d[j].goal, h->name)==0){

                for(i=0; i<s; i++){
                    if(strcmp(d[j].start,names[i])==0){
                        if(i>=count){
                            goal2=i;
                            i=s+1;

                            if(costs_fs[goal2]>d[j].cost+costs_fs[count-1]||costs_fs[goal2]<1){
                                costs_fs[goal2]=d[j].cost+costs_fs[count-1];

                                insert(costs, costs_fs[goal2], names[goal2], h);
                            }
                        }
                        else{
                            i=s+1;
                        }
                    }
                }
                if(i==s){
                    strcpy(names[s],d[j].start);
                    goal2=s;

                    costs_fs[s]=d[j].cost+costs_fs[count-1];

                    s++;

                    insert(costs, costs_fs[goal2], names[goal2], h);
                }
            }
        }
    }

    object = deletemin(costs, count);

    if(strcmp(goal, object->name)==0){
        printcopy(0, object);

        for(j=route-1; j>=0; j--){
            printf("%s\n", routes[j]);
        }
    }

    else if(strcmp(object->name, "")==0){
        printf("(no route)\n");
        free(object);
    }

    else{
        for(i=count; i<s; i++){
            if(strcmp(names[i], object->name)==0){
                strcpy(names[i], names[count]);
                costs_fs[i]=costs_fs[count];
            }
        }
        strcpy(names[count], object->name);
        costs_fs[count]=object->cost;

        loop(count+1, object, goal);
    }
}

int main(int argc, char *argv[])
{
    heap *empty=heap_empty();
    char string1[100];
    char string2[100];
    char goal[100];
    int cost;
    int i=0;

    for(i=0; i<1001; i++){
        costs[i]=heap_empty();
    }

    scanf("%99s",names[0]);
    scanf("%99s",goal);
    strcpy(names[1], goal);
    strcpy(empty->name, names[0]);
    i=0;

    while(scanf("%99s",string1)!=EOF){
        scanf("%99s",string2);
        scanf("%d",&cost);

        insert_data(d, i, string1, string2, cost);
        i++;
        sum++;
    }

    loop(1, empty, goal);

    free(empty);
    for(i=0; i<1001; i++){
        free(costs[i]);
    }

    return 0;
}