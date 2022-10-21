#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


  struct node{
  int data;
  struct node *next;
};
struct node *start = NULL;


void insert(){
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
  printf("Enter Data: ");
  scanf("%d", &temp -> data);
  // struct node * cur;
  if (start == NULL){
    start = temp;
    temp -> next = start;
  }
  else{
    struct node * cur = start;
    while (cur -> next != start){
      cur = cur-> next;
    }
	  temp-> next = start;
    cur -> next = temp;
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
    printf("%d", cur-> data);
    cur = start -> next;

    while (cur!= start){
      printf("\n%d ", cur -> data);
      cur = cur -> next;
    }
  }
  
}

void del(){
  struct node *cur = start;
  struct node *temp = start;
  int todelete;
  struct node * prev;
  printf("\n\nEnter Number to Delete: ");
  scanf("%d", &todelete);
	if (start -> data ==  todelete && start -> next == start){
		start = NULL;
		// printf("dsf;kdsf");
		free(cur);
	}
  else if (start -> data ==  todelete){
		while (temp -> next != start){
      temp = temp -> next;
    }
		temp -> next = start -> next;
    start = start -> next;
    free(cur); 
  }
  else{
    cur = start -> next;
    prev = start;
    while (cur != start){
      if (cur -> data == todelete){
        prev -> next = cur -> next;
        free(cur);
        return;
      }
      cur = cur -> next;
      prev = prev -> next;
    }
		printf("Value not found\n\n");
  }
}

void search(){
  int tosearch;
  if (start == NULL){
		return;    
	}
	printf("\nEnter Any Value to Search: ");
  scanf("%d", &tosearch);
  // else{
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
			
			cur = cur->next;
		}
		
		printf("\nValue Not Found.\n");
		
	// }
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
  print();
  search();
  print();
}
