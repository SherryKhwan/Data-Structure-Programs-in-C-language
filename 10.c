#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
//Circular linkedlist

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
  temp-> next = start;
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

void search(){
  int tosearch;
  printf("\nEnter Any Value to Search: ");
  scanf("%d", &tosearch);
  if (start == NULL){
    printf("\nList Is Empty.");
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
			
			cur = cur->next;
		}
		
		printf("\nValue Not Found.\n");
		
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
  print();
  search();
  print();
}




// #include <stdio.h>
// #include <stdlib.h>

// // This is an implementation for circular linked list

// struct Node {
// 	int data;
// 	struct Node *next;
// };


// struct Node *start = NULL;



// void insert(int num) {
	
// 	struct Node *temp;
	
// 	temp = (struct Node *)malloc(sizeof(struct Node));
		
// 	temp->data = num;
// 	temp->next = start;
	
// 	if (start == NULL) {
// 		start = temp;
// 		temp->next = start;
// 	}
// 	else {
// 		struct Node *curr = start;
		
// 		while (curr->next != start) {
// 			curr = curr->next;
// 		}
		
// 		curr->next = temp;
// 	}
// }



// // This function will delete the node in the linked list that contains user given number
// void deleteNode(int toDelete) {
// 	if (start == NULL) {
// 		printf("\nThere was no node present in your linked list");
// 		return;
// 	}
	
// 	// If the node is in the start;
// 	if (start->data == toDelete) {
// 		struct Node *curr = start;
// 		start = curr->next;
// 		free(curr);
// 	}
// 	else {
// 		struct Node *curr = start->next;
// 		struct Node *prev = start;
		
// 		while (curr != start) {
// 			if (curr->data == toDelete) {
// 				prev->next = curr->next;
// 				free(curr);
// 				return;
// 			}
			
// 			curr = curr->next;
// 			prev = prev->next;
// 		}
// 		printf("\nThere was no node found containg your given number");
// 	}
// }



// void print_nodes() {
// 	if (start == NULL) {
// 		printf("\nThere is no Node in the list\n");
// 	}
// 	else {
// 		struct Node *curr = start;	
		
// 		printf("%d ", curr->data);
		
// 		curr = start->next;
		
// 		while (curr != start) {
// 			printf("%d ", curr->data);
// 			curr = curr->next;
// 		}
// 		printf("\n");
// 	}
// }




// void search(int findNum) {
// 	if (start == NULL) {
// 		printf("\nThere is no Node in the list\n");
// 	}
// 	else {
// 		struct Node *curr = start->next;
		
// 		// Checking the starting node
// 		if (start->data == findNum) {
// 			printf("\nNode found that contains the data");
// 			return;
			
// 		}
		
// 		while (curr != start) {
// 			if (curr->data == findNum) {
// 			printf("\nNode found that contains the data\n");
// 				return;
// 			}	
			
// 			curr = curr->next;
// 		}
		
// 		printf("\nThere is no node containing the data\n");
		
// 	}
// }


// int main() {
// 	insert(45);
// 	insert(1);
// 	insert(23);
// 	insert(123);

	
// 	print_nodes();
	
// 	deleteNode(123);
	
// 	print_nodes();
	
// 	search(0);
// 	search(45);	
// }
