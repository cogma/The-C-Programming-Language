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
    strcpy(t->key,"");
    strcpy(t->value,"");  
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

int depth(BTree *t)
{
    if(btree_isempty(t))
      return 0;

    else if(depth(t->left)<depth(t->right))
      return depth(t->right)+1;
      
    else 
      return depth(t->left)+1;
}

int balance(BTree *t)
{
    return depth(t->left)-depth(t->right);
}

BTree *rotateR(BTree *t)
{
    BTree *tt;
    char b1[100];
    char b2[100];
    char d1[100];
    char d2[100];
    
    tt=btree_empty();
    tt->right=btree_empty();
    tt->left=btree_empty();
    tt->right->left=btree_empty();
    tt->right->right=btree_empty();

    strcpy(b1,t->left->key);
    strcpy(b2,t->left->value);
    strcpy(d1,t->key);
    strcpy(d2,t->value);

    strcpy(tt->key,b1);
    strcpy(tt->value,b2);

    tt->right->right=t->right;

    strcpy(tt->right->key,d1);
    strcpy(tt->right->value,d2);

    tt->left=t->left->left;
    tt->right->left=t->left->right;

    return tt;
}

BTree *rotateL(BTree *t)
{
    BTree *tt; 
    char b1[100];
    char b2[100];
    char d1[100];
    char d2[100];

    tt=btree_empty();
    tt->right=btree_empty();
    tt->left=btree_empty();
    tt->left->left=btree_empty();
    tt->left->right=btree_empty();

    strcpy(d1,t->right->key);
    strcpy(d2,t->right->value);
    strcpy(b1,t->key);
    strcpy(b2,t->value);

    strcpy(tt->key,d1);
    strcpy(tt->value,d2);

    tt->left->left=t->left;

    strcpy(tt->left->key,b1);
    strcpy(tt->left->value,b2);

    tt->right=t->right->right;
    tt->left->right=t->right->left;

    return tt;
}

BTree *balance_left(BTree *t)
{
    if(balance(t->left)<=0)
      return rotateR(t);
    
    else{
        t->left=rotateL(t->left);
        return rotateR(t);
    }

    return rotateR(t);
}

BTree *balance_right(BTree *t)
{
    if(balance(t->right)<=0)
      return rotateL(t);
    
    else{
        t->right=rotateR(t->right);
        return rotateL(t);
    }

    return rotateL(t);
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

  else if(strcmp(key,t->key)<0){
      t->left=btree_insert(key,val,t->left);
      if(balance(t)==2)
        return balance_left(t);

      else
        return t;
  }
  
  else{
      t->right=btree_insert(key,val,t->right);
      if(balance(t)==-2)
        return balance_right(t);

      else
        return t;
  }

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

    return t;
  }

  else if(strcmp(key,t->key)<0){
      t->left=btree_delete(key,t->left);
      if(balance(t)==2)
          return balance_left(t);
  
        else
          return t;
  }

  else{
      t->right=btree_delete(key,t->right);
      if(balance(t)==-2)
        return balance_right(t);

      else
        return t;
  }
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
