#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
// open hashing with pointer array
struct node {
  float data;
  struct node *next;
} *start = NULL;

struct node *link_list(float *a){
  struct node *temp;
  struct node *cur;
  temp = (struct node *)malloc(sizeof(struct node));
  temp -> data = *a;
  temp -> next = NULL;
  if (start == NULL){
    start = temp;
  }
  else{
    cur = start;
    while(cur -> next != NULL){
      cur = cur -> next;
    }
      cur -> next = temp;
  }
  return start;
}

int main() {
  int n, m, size, t, x;
  float d, s;
  printf("Enter Size of Array: ");
  scanf("%d", &n);
  size = n - 1;
  struct node *arr[size];
  for (int i = 0; i < n; i++){
    arr[i] = NULL;
    }
  while (d != -2){
    printf("Enter Data: ");
    scanf("%f", &d);
    t = d;
    m = t % size;
    arr[m] = link_list(&d);
  }
  struct node *cur;
  printf("Enter Data To Search: ");
  scanf("%f", &s);
  int a = s;
  x = a % n;
  cur = arr[x] -> next;

  if (arr[x]->data ==  s){
    printf("Value Found. ");
  }
  else{
    cur = arr[x] -> next;

    while (cur != NULL){
      if (cur -> data == s){
        printf("Value Found. ");
      }
      cur = cur -> next;
    }
  }
}
