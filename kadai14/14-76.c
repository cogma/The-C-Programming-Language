#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char String;
typedef struct tnode BTree;
struct tnode {
    String key[100];
    String value[100];
    BTree *left;
    BTree *right;
};

BTree *btree_empty()
{
  BTree *t;
  
  t=malloc(sizeof(BTree));
  if(t!=NULL){
    t->left=NULL;
    t->right=NULL;
  }

  return t;
}
 
int btree_isempty(BTree *t)
{
  int s=0;

  if((t->left==NULL)&&(t->right==NULL))
    s=1;

  return s;
}

struct tnode *btree_search(String *key, BTree *t)
{
  if(btree_isempty(t))
    return NULL;
  
  else if(strcmp(key,t->key)==0)
    return t;
  
  else if(btree_isempty(t->left)&&btree_isempty(t->right))
    return NULL;
  
  else if(strcmp(key,t->key)<0)
    return btree_search(key,t->left);
  
  else
    return btree_search(key, t->right);
    
}

BTree *update(String *key,String *val,BTree *t)
{
  if(strcmp(key,t->key)==0)
    strcpy(t->value,val);
  
  else if(strcmp(key,t->key)<0)
    t->left=update(key,val,t->left);
  
  else
    t->right=update(key,val,t->right);

  return t;
}
 
BTree *btree_insert(String *key, String *val, BTree *t)
{
  if(btree_search(key,t)!=NULL)
    t=update(key,val,t);

  else if(btree_isempty(t)){
    strcpy(t->key,key);
    strcpy(t->value,val);
    t->left=btree_empty();
    t->right=btree_empty();
  }

  else if(strcmp(key,t->key)<0)
    t->left=btree_insert(key,val,t->left);
  
  else
    t->right=btree_insert(key,val,t->right);

  return t;
}

BTree *delete_car(BTree *t)
{
  if(btree_isempty(t->right))
    return t;

  else
    return delete_car(t->right);
}
 
BTree *btree_delete(String *key, BTree *t)
{
  if(btree_search(key,t)==NULL)
    return t;
  
  else if(strcmp(key,t->key)==0){
    if(btree_isempty(t->left))
      return t->right;
    
    else if (btree_isempty(t->right))
      return t->left;

    else{
      char s1[100];
      char s2[100];
      strcpy(s1,(delete_car(t->left))->key);
      strcpy(s2,(delete_car(t->left))->key);

      t=btree_delete(delete_car(t->left)->key,t);
      strcpy(t->key,s1);
      strcpy(t->value,s2);
      return t;
    }
  }

  else if(strcmp(key,t->key)<0)
    t->left=btree_delete(key,t->left);

  else
    t->right=btree_delete(key,t->right);

  return t;

}
 
void btree_free(BTree *t)
{
  if(!btree_isempty(t)){
    btree_free(t->left);
    btree_free(t->right);
    free(t);
  }
}

int main(int argc, char *argv[])
{
  BTree *t;
  char cmd[100];
  char cmd1[]="insert";
  char cmd2[]="delete";
  char cmd3[]="search";
  char cmd4[]="quit";
  char key[100];
  char val[100];

  t=btree_empty();

  while((scanf("%99s",cmd)!=EOF)&&(strcmp(cmd,cmd4)!=0)){
    if(strcmp(cmd,cmd1)==0){
      scanf("%99s",key);
      scanf("%99s",val);
      t=btree_insert(key,val,t);
    }

    else if(strcmp(cmd,cmd2)==0){
      scanf("%99s",key);
      t=btree_delete(key,t);
    }

    else if(strcmp(cmd,cmd3)==0){
      scanf("%99s",key);

      if(btree_search(key,t)==NULL)
        printf("%s\n","(not found)");

      else
	printf("%s\n",btree_search(key,t)->value);
    }

    else
      printf("%s\n","(unknown command)");
    
    cmd[0]='\0';
  }

  btree_free(t);
  
  return 0;
}
