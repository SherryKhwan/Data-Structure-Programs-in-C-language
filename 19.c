#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
//queue link list

  struct node{
  int data;
  struct node *next;
};
struct node *start = NULL;


void eq(){
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
  printf("Enter Data: ");
  scanf("%d", &temp -> data);
  temp-> next = NULL;
  struct node * cur;
  if (start == NULL){
    start = temp;
  }
  else{
    struct node * cur = start;
    while (cur -> next != NULL){
      cur = cur-> next;
    }
    cur -> next = temp;
  }
}

void print(){
  struct node * temp;
  if (start == NULL){
    printf("List is Empty. ");
  }
  else{
    struct node * cur = start;
    while (cur != NULL){
      printf("\n%d ", cur -> data);
      cur = cur -> next;
    }
  }
}

void dq(){
  struct node *cur;
  cur = start;

  // int todelete;
  // struct node * prev;
  // printf("\n\nEnter Number to Delete: ");
  // scanf("%d", &todelete);
  // if (start -> data ==  todelete){
    start = start -> next;
    free(cur); 
  
  // else{
  //   cur = start -> next;
  //   prev = start;
  //   while (cur != NULL){
  //     if (cur -> data == todelete){
  //       prev -> next = cur -> next;
  //       free(cur);
  //       return;
  //     }
      // cur = cur -> next;
      // prev = prev -> next;
    // }4
    
  }


 int main() {
  int n, i;
  printf("Enter Number of Input: ");
  scanf("%d", &n);
  printf("\n");
  for (i = 0; i < n; i++){
    eq();
  }
  print();
  dq();
  print();
}
