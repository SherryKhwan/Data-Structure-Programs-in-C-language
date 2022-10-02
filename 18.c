#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
//Stack linked list
struct node {
  int data;
  struct node *next;
} *top;

void push(){
  struct node *temp;
  struct node *cur;
  temp = (struct node*)malloc(sizeof(struct node));
  printf("Enter Data to Push: ");
  scanf("%d", &temp -> data);
  if (top == temp){
    top = temp;
  }
  else {
    temp -> next = top;
    top = temp;
  }
}

void print(){
  struct node * temp;
  temp = (struct node*)malloc(sizeof(struct node));
  if (top == NULL){
    printf("Stack Underflow");
  }
  else{
    struct node * cur = top;
    while (cur != NULL){
      printf("\n%d ", cur -> data);
      cur = cur -> next;
    }
  }
}

void pop(){
  struct node *cur;

  cur = top;
  top = top -> next;
  printf("%d", cur -> data);
  free (cur);
//   if (top == NULL){
//     printf("Stack Underflow");
// }
}

int main(void) {
  int n, i;
  printf("Enter Number of Input: ");
  scanf("%d", &n);
  printf("\n");
  for (i = 0; i < n; i++){
    push();
  }
  if (n ==0){
  print();

  }
  else {
  pop();

  }
}
