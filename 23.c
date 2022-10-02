// #include <stdio.h>
// #include<stdlib.h>


//errored

// struct btnode{
//   int data;
//   struct btnode *leftchild;
//   struct btnode *rightchild;
//  } *root = NULL;

// void insert(){
//   struct btnode *temp;
//   struct btnode *cur;
//   struct btnode *prev = root;
//   temp = (struct btnode*)malloc(sizeof(struct btnode));
//   printf("Enter Data: ");
//   scanf("%d", &temp -> data);
//   temp -> rightchild = NULL;
//   temp -> leftchild = NULL;
//   if (root == NULL){
//     root = temp;
//   }
//   else{
//     cur = root;
//     while (cur != NULL){
//       if (cur -> data > temp -> data){
//         prev = cur;
//         cur = cur -> leftchild;
//       }
//       else{
//         prev = cur;
//         cur = cur -> rightchild;
//       }
//     }
//     if (prev -> data > temp -> data){
//       prev -> leftchild = temp;
//     }
//     else{
//       prev -> rightchild = temp;
//     }
//   }
//   int lh = 0; int rh = 0;
//   int lhl = 0; int lhr = 0;
//   int rhl = 0; int rhr = 0;
//   cur = root;
//   cur = cur -> leftchild;
//   while (cur!= NULL){
//     lh = lh + 1;
//     if (cur -> leftchild == NULL && cur -> rightchild != NULL){
//       cur = cur -> rightchild;
//     }
//     else if (cur -> rightchild == NULL && cur -> leftchild != NULL){
//       cur = cur -> leftchild;
//     }
//     else if (cur -> rightchild != NULL &&cur -> leftchild != NULL){
      
//     }
//   }
//   cur = root;
//   while (cur != NULL){
//     cur = cur -> rightchild;
//     rh = rh + 1;
//   }
// }

// void search(){
//   int tosearch, c = 0;
//   struct btnode *temp;
//   struct btnode *cur = root;
//   printf("Enter Value To Search: ");
//   scanf("%d", &tosearch);
//   while (5 == 5){
//     if (tosearch == cur -> data){
//       c++;
//       printf("Value Found.\nTotal Comparision(s): %d", c);
//       break;
//     }
//     if (tosearch > cur -> data){
//       c++;
//       if (cur -> rightchild == NULL){
//         printf("Value Not Found.");
//         break;
//       }
//       cur = cur -> rightchild;
//     }
//     else{
//       c++;
//       if (cur -> leftchild == NULL){
//         printf("Value Not Found.");
//         break;
//       }
//       cur = cur -> leftchild;
//     }
//   }
// }

// void deletet(){
//   int todel, c = 0;
//   struct btnode *temp;
//   struct btnode *cur = root;
//   struct btnode *prev = cur;
//   printf("\nEnter Value to Delete: ");
//   scanf("%d", &todel);
//   while (5 == 5){
//     if (todel == cur -> data){
//       if (cur -> rightchild == NULL && cur -> leftchild == NULL){
//         free(cur);
//         printf("Value Sucessfully Deleted.\n");
//         break;
//       }
//       if (cur -> rightchild == NULL && cur -> leftchild != NULL){
//         prev -> leftchild = cur -> leftchild;
//         free(cur);
//         printf("Value Sucessfully Deleted.\n");
//         break;
//       }
//       if (cur -> leftchild == NULL && cur -> rightchild != NULL){
//         prev -> rightchild = cur -> rightchild;
//         free(cur);
//         printf("Value Sucessfully Deleted.\n");
//         break;
//       }
//       if (cur -> rightchild != NULL && cur -> leftchild != NULL){
//         temp = cur;
//         cur = cur -> rightchild;
//         while (cur -> leftchild != NULL){
//           cur = cur -> leftchild;
//         }
//         temp -> data = cur -> data;
//         free(cur);
//         printf("Value Sucessfully Deleted.\n");
//         break;
//       }      
//     }
//     if (todel > cur -> data){
//       prev = cur;
//       cur = cur -> rightchild;
//     }
//     else {
//       if (todel < cur -> data){
//       prev = cur;
//       cur = cur -> leftchild;
//       }
//     }
//   if (cur -> leftchild == NULL && cur -> rightchild == NULL){
//     printf("Value Not Found.\n");
//     break;
//   }
//   }

// }

// void print(){
//   struct btnode *cur = root;
//   while (cur != NULL){
//     printf("%d", cur -> data);
//     cur = cur -> rightchild;
//   }
// }

// int main() {
//   int n;
//   while (n != 4){
//     printf("\n\nChoose a Function:\n (1) Enter Data Into The Tree.\n (2) Search Data.\n (3) Delete Data\n (4) Exit. \n\nEnter Any Number: ");
//     scanf("%u", &n);

//     if (n == 1){
//       int i = 0;
//       printf(("\nEnter Number of Data: "));
//       scanf("%d", &i);
//       for (int z = 0; z < i; z++){
//         insert();
//       }
//       printf("\nData Added Sucessfully.\n ");
//     }

//     if (n == 2){
//       search();
//       }

//     if (n == 3){
//       deletet();
//     }
    
//   }


//   // int n;
//   // printf("Enter Number of Data: ");
//   // scanf("%d", &n);
//   // for (int i = 0; i < n; i++){
//   //   insert();
//   // }
//   // search();
//   // deletet();
//   // search();
// }




#include <stdio.h>
#include<stdlib.h>



// struct btnode{
//   int data;
//   struct btnode *leftchild;
//   struct btnode *rightchild;
//  } *root = NULL;

// void insert(){
//   struct btnode *temp;
//   struct btnode *cur;
//   struct btnode *prev = root;
//   temp = (struct btnode*)malloc(sizeof(struct btnode));
//   printf("Enter Data: ");
//   scanf("%d", &temp -> data);
//   temp -> rightchild = NULL;
//   temp -> leftchild = NULL;
//   if (root == NULL){
//     root = temp;
//   }
//   else{
//     cur = root;
//     while (cur != NULL){
//       if (cur -> data > temp -> data){
//         prev = cur;
//         cur = cur -> leftchild;
//       }
//       else{
//         prev = cur;
//         cur = cur -> rightchild;
//       }
//     }
//     if (prev -> data > temp -> data){
//       prev -> leftchild = temp;
//     }
//     else{
//       prev -> rightchild = temp;
//     }
//   }
//   int lh = 0; int rh = 0;
//   int lhl = 0; int lhr = 0;
//   int rhl = 0; int rhr = 0;
//   cur = root;
//   cur = cur -> leftchild;
//   while (cur!= NULL){
//     lh = lh + 1;
//     if (cur -> leftchild == NULL && cur -> rightchild != NULL){
//       cur = cur -> rightchild;
//     }
//     else if (cur -> rightchild == NULL && cur -> leftchild != NULL){
//       cur = cur -> leftchild;
//     }
//     else if (cur -> rightchild != NULL &&cur -> leftchild != NULL){
      
//     }
//   }
//   cur = root;
//   while (cur != NULL){
//     cur = cur -> rightchild;
//     rh = rh + 1;
//   }
// }

// void search(){
//   int tosearch, c = 0;
//   struct btnode *temp;
//   struct btnode *cur = root;
//   printf("Enter Value To Search: ");
//   scanf("%d", &tosearch);
//   while (5 == 5){
//     if (tosearch == cur -> data){
//       c++;
//       printf("Value Found.\nTotal Comparision(s): %d", c);
//       break;
//     }
//     if (tosearch > cur -> data){
//       c++;
//       if (cur -> rightchild == NULL){
//         printf("Value Not Found.");
//         break;
//       }
//       cur = cur -> rightchild;
//     }
//     else{
//       c++;
//       if (cur -> leftchild == NULL){
//         printf("Value Not Found.");
//         break;
//       }
//       cur = cur -> leftchild;
//     }
//   }
// }

// void deletet(){
//   int todel, c = 0;
//   struct btnode *temp;
//   struct btnode *cur = root;
//   struct btnode *prev = cur;
//   printf("\nEnter Value to Delete: ");
//   scanf("%d", &todel);
//   while (5 == 5){
//     if (todel == cur -> data){
//       if (cur -> rightchild == NULL && cur -> leftchild == NULL){
//         free(cur);
//         printf("Value Sucessfully Deleted.\n");
//         break;
//       }
//       if (cur -> rightchild == NULL && cur -> leftchild != NULL){
//         prev -> leftchild = cur -> leftchild;
//         free(cur);
//         printf("Value Sucessfully Deleted.\n");
//         break;
//       }
//       if (cur -> leftchild == NULL && cur -> rightchild != NULL){
//         prev -> rightchild = cur -> rightchild;
//         free(cur);
//         printf("Value Sucessfully Deleted.\n");
//         break;
//       }
//       if (cur -> rightchild != NULL && cur -> leftchild != NULL){
//         temp = cur;
//         cur = cur -> rightchild;
//         while (cur -> leftchild != NULL){
//           cur = cur -> leftchild;
//         }
//         temp -> data = cur -> data;
//         free(cur);
//         printf("Value Sucessfully Deleted.\n");
//         break;
//       }      
//     }
//     if (todel > cur -> data){
//       prev = cur;
//       cur = cur -> rightchild;
//     }
//     else {
//       if (todel < cur -> data){
//       prev = cur;
//       cur = cur -> leftchild;
//       }
//     }
//   if (cur -> leftchild == NULL && cur -> rightchild == NULL){
//     printf("Value Not Found.\n");
//     break;
//   }
//   }

// }

// void print(){
//   struct btnode *cur = root;
//   while (cur != NULL){
//     printf("%d", cur -> data);
//     cur = cur -> rightchild;
//   }
// }

// int main() {
//   int n;
//   while (n != 4){
//     printf("\n\nChoose a Function:\n (1) Enter Data Into The Tree.\n (2) Search Data.\n (3) Delete Data\n (4) Exit. \n\nEnter Any Number: ");
//     scanf("%u", &n);

//     if (n == 1){
//       int i = 0;
//       printf(("\nEnter Number of Data: "));
//       scanf("%d", &i);
//       for (int z = 0; z < i; z++){
//         insert();
//       }
//       printf("\nData Added Sucessfully.\n ");
//     }

//     if (n == 2){
//       search();
//       }

//     if (n == 3){
//       deletet();
//     }
    
//   }


//   // int n;
//   // printf("Enter Number of Data: ");
//   // scanf("%d", &n);
//   // for (int i = 0; i < n; i++){
//   //   insert();
//   // }
//   // search();
//   // deletet();
//   // search();
// }




struct btnode{
  int data;
  struct btnode *leftchild;
  struct btnode *rightchild;
}; struct btnode *root = NULL;

struct btnode *insert(struct btnode *node, int d){
  if (node == NULL)
  {
    struct btnode *temp;
    temp = (struct btnode *)malloc(sizeof(struct btnode));
    temp -> data = d;
    temp -> leftchild = NULL;
    temp -> rightchild = NULL;
    return node;
  }
  else {
    if (node -> data > d)
    {
      node -> leftchild = insert(node -> leftchild, d);
    }
    if (node -> data < d)
    {
      node -> rightchild = insert(node -> rightchild, d);
    }
    return node;
  }
}


int search(struct btnode *node, int val){
  int a;
  if (node -> data == val)
  {
    a = 1;
    // return a;
  }
  else if (node == NULL)
  {
    a = 0; 
    // return a;
  }
  // else if (node -> data < val &&  node -> rightchild == NULL)
  // {
  //   a = 0;
  //   // return a;
  // }

  else if (node -> data > val)
  {
    a = search(node -> leftchild, val);
    // return a;
  }
  else if (node -> data < val)
  {
    a = search(node -> rightchild, val);
    // return a;
  }
  return a;
}






int main(){
  int d, s, del; 
  printf("Enter Data: ");
  scanf("%d", &d);
  root = insert(root, d);printf("Enter Data: ");
  scanf("%d", &d);
  root = insert(root, d);printf("Enter Data: ");
  scanf("%d", &d);
  root = insert(root, d);printf("Enter Data: ");
  scanf("%d", &d);
  root = insert(root, d);printf("Enter Data: ");
  scanf("%d", &d);
  root = insert(root, d);
  printf("Enter Data to Search: ");
  scanf("%d", &s);
  int a = search(root, s);
  if (a == 1)
  {
    printf("found\n");
  }if (a == 0)
  {
    printf("not found\n");
  }
}
