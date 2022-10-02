#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
//Double linklist

  struct node{
  int data;
  struct node *next;
  struct node *prev;
};
struct node *start = NULL;


void insert(){
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
  printf("Enter Data: ");
  scanf("%d", &temp -> data);
  temp-> next = NULL;
  temp -> prev = NULL;
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
    temp -> prev = cur;
  }
}

void print(){
  struct node * temp;
  temp = (struct node*)malloc(sizeof(struct node));
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

void search(){
  int tosearch;
  int f = 0;
  printf("\nEnter Any Value to Search: ");
  scanf("%d", &tosearch);
  if (start == NULL){
    printf("\nList Is Empty.");
    f = 1;
    }

  else{
    struct node *cur = start -> next;
    if (start -> data == tosearch){
      printf("\nValue Found.");
      return;
    }
    while (cur != start) {
			if (cur->data == tosearch) {
			printf("\nValue Found.\n");
				return;
			}	
			f = 1;
			cur = cur->next;
		}
		if (f == 0){
		printf("\nValue Not Found.\n");
    }
	}
}

void del(){
  struct node *cur;
  cur = start;
  int todelete;
  struct node * prev;
  printf("\n\nEnter Number to Delete: ");
  scanf("%d", &todelete);
  if (start -> data ==  todelete){
    start = start -> next;
    free(cur); 
  }
  else{
    cur = start -> next;
    prev = start;
    while (cur != NULL){
      if (cur -> data == todelete){
        prev -> next = cur -> next;
        free(cur);
        return;
      }
      cur = cur -> next;
      prev = prev -> next;
    }
  }
}

 int main() {
  int n, i;
  printf("Enter Number of Input: ");
  scanf("%d", &n);
  printf("\n");
  for (i = 0; i < n; i++){
    insert();
  }
  print();
  del();
  insert();
  print();
  search();
}
