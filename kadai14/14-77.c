#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char String;
typedef struct lnode List;
struct lnode {
    String key[100];
    String value[100];
    List *next;
};

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

int get_index(String *key)
{
    int i, sum=0;

    for(i=0;i<strlen(key);i++){
        sum+=key[i];
    }

    return sum%30;
}

List *list_search(String *key, List *l)
{
  if(list_isempty(l))
    return NULL;
  
  else if(strcmp(key,l->key)==0)
    return l;
  
  else
    return list_search(key,l->next); 
}

List *member(List hash[30],String *key)
{
    int index=get_index(key);
    
    return list_search(key,&hash[index]);
}

List *list_insert(String *key,String *val,List *l)
{
  if(list_isempty(l)){
    strcpy(l->key,key);
    strcpy(l->value,val);
    l->next=list_empty();

    return l;
  }

  else if(strcmp(key,l->key)==0){
    strcpy(l->value,val);

    return l;
  }

  else{
    l->next=list_insert(key,val,l->next);

    return l;
  }
}

List *insert(List hash[30],String *key,String *val,int index)
{
    return list_insert(key,val,&hash[index]);
}

List *list_delete(String *key,List *l)
{
  if(list_isempty(l)){
    return l;
  }

  else if(strcmp(key,l->key)==0){
    return l->next;
  }

  else{
    l->next=list_delete(key,l->next);

    return l;
  }
}

List *delete(List hash[30],String *key,int index)
{
  return list_delete(key,&hash[index]);
}

void list_free(List* l){
  if(l!=NULL){
    list_free(l->next);
    free(l);
  }
}

void hash_free(List hash[30])
{
  int s;

    for(s=0;s<30;s++){
        list_free(&hash[s]);
    }
}

int main(int argc, char *argv[])
{

  List hash[30];
  char cmd[100];
  char cmd1[]="insert";
  char cmd2[]="delete";
  char cmd3[]="search";
  char cmd4[]="quit";
  char key[100];
  char val[100];
  int index, s;

  for(s=0;s<30;s++){
      hash[s]=*list_empty();
  }

  while((scanf("%99s",cmd)!=EOF)&&(strcmp(cmd,cmd4)!=0)){
    if(strcmp(cmd,cmd1)==0){
      scanf("%99s",key);
      scanf("%99s",val);
      index=get_index(key);
      hash[index]=*insert(hash,key,val,index);
    }

    else if(strcmp(cmd,cmd2)==0){
      scanf("%99s",key);
      index=get_index(key);
      hash[index]=*delete(hash,key,index);
    }

    else if(strcmp(cmd,cmd3)==0){
      scanf("%99s",key);

      if(member(hash,key)==NULL)
        printf("%s\n","(not found)");

      else
	printf("%s\n",member(hash,key)->value);
    }

    else
      printf("%s\n","(unknown command)");
    
    cmd[0]='\0';
  }

  hash_free(hash);
  
  return 0;
}