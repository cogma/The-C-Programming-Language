#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char String;
typedef struct lnode List;
struct lnode {
    String data[100];
    List *next;
} ;

List* list_empty(){
   List *l;
   l=malloc(sizeof(List));
   if(l!=NULL){
     l->next=NULL;
   }
   return l;
}

int list_isempty(List *l)
{
  int s=0;

  if (l->next==NULL)
    s=1;
  
  return s;
}

List* list_cons(String *s,List *l){
  List *ll=list_empty();

    if (ll == NULL) { 
      return NULL;
    }

    ll->next = l;
    strcpy(ll->data, s);
    return ll;
}

void list_putl(List* l){
  while(!list_isempty(l)){
    printf("%s\n",l->data);
    l=l->next;
  }
}

void list_free(List* l){
  if(l!=NULL){
    list_free(l->next);
    free(l);
  }
}

int main(void){
  List *l;
  char buf[100] = "";

  if((l=list_empty())==NULL){
    return 1;
  }
  
  while (scanf("%99s", buf) != EOF) {
            l = list_cons(buf,l);
            buf[0] = '\0';
    }
  list_putl(l);

  list_free(l);

  return 0;
}