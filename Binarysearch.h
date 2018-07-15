#include <stdio.h>
#include <stdlib.h>

typedef int BType;
typedef struct node {
    BType data;
    struct node *leftchild;
    struct node *rightchild;
} bnode_t;

bnode_t *getBinaryNode(BType key)
{
     bnode_t *node=(bnode_t *)malloc(sizeof(bnode_t));
     node->leftchild=NULL;
     node->rightchild=NULL;
     node->data=key;
     
     return(node);
}
bnode_t *insert(bnode_t *root, BType key)
{
  if(root==NULL)
  {
    root = getBinaryNode(key);
        return root;
  }



}
