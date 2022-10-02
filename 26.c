#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// avl tree

struct avlnode{
  int data;
  struct avlnode *leftchild;
  struct avlnode *rightchild;
  int Height;
}; 


// int max(int a, int b);

int height(struct avlnode *newnode) {
  if (newnode == NULL)
    return 0;
  return newnode -> Height;
}

int max(int a, int b) {
  if (a > b){
    return a;
  }
  else return b;
}

int getheight (struct avlnode * newnode){
  if (newnode == NULL ){
    return -1;
  }
  else {
    int left = getheight (newnode -> leftchild); 
    int right = getheight (newnode -> rightchild);
    int height = max(left, right);
    return height;
  }
}



struct avlnode *rotateright(struct avlnode *y)
{
	struct avlnode *x = y->leftchild;
	struct avlnode *T2 = x->rightchild; 

	// Perform rotation
	x->rightchild = y;
	y->leftchild = T2;

	// Update heights
	y->Height = max(height(y->leftchild), height(y->rightchild))+1;
	x->Height = max(height(x->leftchild), height(x->rightchild))+1;

	// Return new root
	return x;
}

// A utility function to left rotate subtree rooted with x
// See the diagram given above.
struct avlnode *rotateleft(struct avlnode *x)
{
	struct avlnode *y = x->rightchild;
	struct avlnode *T2 = y->leftchild;

	// Perform rotation
	y->leftchild = x;
	x->rightchild = T2;

	// Update heights
	x->Height = max(height(x->leftchild), height(x->rightchild))+1;
	y->Height = max(height(y->leftchild), height(y->rightchild))+1;

	// Return new root
	return y;
}





int getBalance(struct avlnode *newnode) {
  if (newnode == NULL)
    return 0;
  return height(newnode->leftchild) - height(newnode->rightchild);
}

struct avlnode *insert( struct avlnode *node, int value){
  if (node == NULL){
    struct avlnode *temp;
    temp = (struct avlnode*)malloc(sizeof(struct avlnode));
    temp -> data = value;
    temp -> leftchild = NULL;
    temp -> rightchild = NULL;
    temp -> Height = 1;
    return temp;
  }
  if (value > node -> data){
    node -> rightchild = insert(node -> rightchild, value);
  }
  else if (value < node -> data){
    node -> leftchild = insert(node ->leftchild, value);
  }
  else return node;
  node->Height = 1 + max(height(node->leftchild),
  height(node->rightchild));
  int balance = getBalance(node);
  if (balance > 1 && value < node->leftchild->data)
		return rotateright(node);

	// Right Right Case
	if (balance < -1 && value > node->rightchild->data)
		return rotateleft(node);

	// Left Right Case
	if (balance > 1 && value > node->leftchild->data)
	{
		node->leftchild = rotateleft(node->leftchild);
		return rotateright(node);
	}

	// Right Left Case
	if (balance < -1 && value < node->rightchild->data)
	{
		node->rightchild = rotateright(node->rightchild);
		return rotateleft(node);
	}
  return node;
}

struct avlnode *minValueNode(struct avlnode *node) {
  struct avlnode *cur = node;

  while (cur->leftchild != NULL)
    cur = cur->leftchild;

  return cur;
}

struct avlnode *deleteNode(struct avlnode *root, int value) {
  // Find the node and delete it
  if (root == NULL)
    return root;

  if (value < root->data)
    root->leftchild = deleteNode(root->leftchild, value);

  else if (value > root->data)
    root->rightchild = deleteNode(root->rightchild, value);

  else {
    if ((root->leftchild == NULL) || (root->rightchild == NULL)) {
      struct avlnode *temp = root->leftchild ? root->leftchild : root->rightchild;

      if (temp == NULL) {
        temp = root;
        root = NULL;
      } else
        *root = *temp;
      free(temp);
    } else {
      struct avlnode *temp = minValueNode(root->rightchild);

      root->data = temp->data;

      root->rightchild = deleteNode(root->rightchild, temp->data);
    }
  }

  if (root == NULL)
    return root;

  root->Height = 1 + max(height(root->leftchild),
               height(root->rightchild));

  int balance = getBalance(root);
  if (balance > 1 && getBalance(root->leftchild) >= 0)
    return rotateright(root);

  if (balance > 1 && getBalance(root->leftchild) < 0) {
    root->leftchild = rotateleft(root->leftchild);
    return rotateright(root);
  }

  if (balance < -1 && getBalance(root->rightchild) <= 0)
    return rotateleft(root);

  if (balance < -1 && getBalance(root->rightchild) > 0) {
    root->rightchild = rotateright(root->rightchild);
    return rotateleft(root);
  }

  return root;
}

void printPostorder(struct avlnode* node)
{
    if (node == NULL)
        return;

    // first recur on left subtree
    printPostorder(node->leftchild);

    // then recur on right subtree
    printPostorder(node-> rightchild );
    // printf("fsf");

    // now deal with the node
    printf("%d ", node->data);
}

void printInorder(struct avlnode* node)
{

    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->leftchild);
 
    /* then print the data of node */
    printf("%d ", node->data);
 
    /* now recur on right child */
    printInorder(node->rightchild);
}

void printPreorder(struct avlnode* node)
{
    if (node != NULL) {
    printf("%d ", node->data);
    printPreorder(node->leftchild);
    printPreorder(node->rightchild);
  }
}

int main (){
  struct avlnode *root = NULL;
  int n;
  int c , inp;
  while (n != 4){
    printf("\nChoose a Function:\n (1) Insert/ Create Node.\n (2) Print AVL Tree.\n (3) Delete a Node.\n (4) Exit.\n\nEnter Any Number: ");
    scanf("%u", &n);
    if (n == 1){
      printf("Enter Number of Input: ");
      scanf("%d", &c);
      for (int i = 0; i < c; i++){
        printf("Enter Value: ");
        scanf("%d", &inp);
        root = insert(root, inp);
        // printf("Node(s) Added Successfully.\n");
      }
    }

    if (n == 2){
      printf("Pre Order Print:\n");
      printPreorder(root);
      printf("\nIn Order Print:\n");
      printInorder(root);
      printf("\nPost Order Print:\n");
      printPostorder(root);
    }

    if (n == 3){
      printf("Enter Value To Delete: ");
      scanf("%d", &inp);
      root = deleteNode(root, inp);
      printf("Value Deleted Successfully.");
    }

  }
}
  
