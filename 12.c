#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Sorted linklist

struct node {
  int data;
  struct node *next;
};
struct node *start = NULL;

void input(){
  struct node *temp;
  struct node *cur;
  struct node *check;
  int var;
  temp = (struct node*)malloc(sizeof(struct node));
  printf("Enter Data: ");
  scanf("%d", &temp -> data);
  temp -> next = NULL;
  if (start == NULL){
    start = temp;
  }
  else {
    if (temp -> data < start -> data){
      var = start -> data;
      start -> data = temp -> data;
      temp -> data = var;
    }
    if (start -> next != NULL ) {
      cur = start -> next;
    }
    else{
      cur = start;
    }
    if (temp -> data < cur -> data){
      var = cur -> data;
      cur -> data = temp -> data;
      temp -> data = var;
    } 
    while (cur -> next != NULL){
      if (temp -> data < cur -> data){
        var = cur -> data;
        cur -> data = temp -> data;
        temp -> data = var;
      } 
      cur = cur -> next;
			if (temp -> data < cur -> data){
        var = cur -> data;
        cur -> data = temp -> data;
        temp -> data = var;
			}
    }
    cur -> next = temp;
  }
}

void print_list(){
  struct node *temp;
  if (start == NULL){
    printf("list Is Empty");
  }
  else {
    temp = start;
    while (temp != NULL){
      printf("%d ", temp -> data);
      temp = temp -> next;
    }
  }
}



int main() {
  input();
  input();
  input();
  input();
  print_list();
}
