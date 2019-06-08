#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct lnode {
    int data;
    struct lnode *next;
} *List;

List list_empty()
{
   List l;
   
   l=malloc(sizeof(List));
   if(l!=NULL){
     l->next=NULL;
   }
   return l;
}

List stack_push(List st, int a)
{
    List st2=list_empty();
    st2->next=st;
    st2->data=a;

    return st2;
}

int stack_read(List st)
{
    return st->data;
}

List stack_pop(List st)
{
    return st->next;
}

List calc_add(List st)
{
    return stack_push(stack_pop(stack_pop(st)),stack_read(stack_pop(st))+stack_read(st));
}

List calc_sub(List st)
{
    return stack_push(stack_pop (stack_pop (st)),stack_read (stack_pop (st))- (stack_read (st)));
}

List calc_mul(List st)
{
    return stack_push(stack_pop (stack_pop (st)),stack_read (stack_pop (st))* stack_read (st));
}

int list_isempty(List l)
{
  int s=0;

  if (l->next==NULL)
    s=1;
  
  return s;
}

void list_free(List l){
  if(l!=NULL){
    list_free(l->next);
    free(l);
  }
}

int main(int argc, char *argv[])
{
    List st;
    char cmd[10];
 
    st = list_empty();
 
    while ((scanf("%9s", cmd) != EOF) && (cmd[0] != '=')) {
        if (isdigit(cmd[0])) {
            st = stack_push(st, atoi(cmd));
        } else if (cmd[0] == '+') {
            st = calc_add(st);
        } else if (cmd[0] == '-') {
            st = calc_sub(st);
        } else if (cmd[0] == '*') {
            st = calc_mul(st);
        } else {
            printf("(unknown command)\n");
        }
        cmd[0] = '\0';
    }
    if (! list_isempty(st)) {
        printf("%d\n", stack_read(st));
    }
 
    list_free(st);
 
    return 0;
}
