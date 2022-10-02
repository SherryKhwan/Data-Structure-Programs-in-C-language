#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
//open hashing link list

struct node {
  int data;
  struct node *next;
};

int main() {
  int size, i, m, d, n, k, p = 0;
  printf("Enter size of Array: ");
  scanf("%d", &n);
  size = n - 1;
  struct node arr[size];
  for (i = 0; i < n; i++){
    arr[i].data = -1;
  }
  while (d != -2 && k < n){
    printf("Enter Data: ");
    scanf("%d", &d);
    m = d % n;
    if (arr[m].data == -1){
      arr[m].data = d;
      arr[m].next = NULL;
      p++;
      k++;
    }
    else {
      struct node *temp;
      temp = (struct node*)malloc(sizeof(struct node));
      temp -> data = d;
      temp-> next = NULL;
      if (arr[m].next == NULL){
        arr[m].next = temp;
      }
      else{
        struct node * cur = arr[m].next;
        while (cur -> next != NULL){
          cur = cur-> next;
        }
        cur -> next = temp;
      }
    }
  }
  int s, x;
  struct node *cur;
  printf("Enter Data To Search: ");
  scanf("%d", &s);
  x = s % n;
  cur = arr[x].next;

  if (arr[x].data ==  s){
    printf("Value Found. ");
  }
  else{
    cur = arr[x].next -> next;

    while (cur != NULL){
      if (cur -> data == s){
        printf("Value Found. ");
      }
      cur = cur -> next;
    }
  }
}

