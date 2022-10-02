#include <stdio.h>
#include <stdlib.h>
//split nos into 2
struct node1 {
  int data;
  struct node1 *next1;
};
struct node1 *start1 = NULL;

struct node2 {
  int data;
  struct node2 *next2;
};
struct node2 *start2 = NULL;

struct node3 {
  int data;
  struct node3 *next3;
};
struct node3 *start3 = NULL;

void insert1(int *a){
  struct node1 *temp;
  struct node1 *cur;
  temp = (struct node1 *)malloc(sizeof(struct node1));
  temp -> data = *a;  
  temp -> next1 = NULL;
  if (start1 == NULL){
    start1 = temp;
  }
  else{
    cur = start1;
    while (cur -> next1 != NULL){
      cur = cur -> next1;
    }
    cur -> next1 = temp;
  }
}

void insert2(int *a){
  struct node2 *temp;
  struct node2 *cur;
  temp = (struct node2 *)malloc(sizeof(struct node2));
  temp -> data = *a;  
  temp -> next2 = NULL;
  if (start2 == NULL){
    start2 = temp;
  }
  else{
    cur = start2;
    while (cur -> next2 != NULL){
      cur = cur -> next2;
    }
    cur -> next2 = temp;
  }
}

void print_list1(){
  struct node1 *cur;
  if (start1 == NULL){
    printf("\nList-1 Is Empty.\n");
  }
  else{
    cur = start1;
    while(cur != NULL){
      printf("\n%d", cur -> data);
      cur = cur -> next1;
    }
  }
}

void print_list2(){
  struct node2 *cur;
  if (start2 == NULL){
    printf("\nList-2 Is Empty.\n");
  }
  else{
    cur = start2;
    while(cur != NULL){
      printf("\n%d", cur -> data);
      cur = cur -> next2;
    }
  }
}

void list3(){
  struct node3 *temp;
  struct node3 *cur;
  struct node1 *list1 = start1;
  int flag = 0;
  struct node2 *list2 = start2;
  while (list1 != NULL && list2  != NULL){
    temp = (struct node3 *)malloc(sizeof(struct node3));
    int k = list1 -> data + list2 -> data; 
    if (flag == 1){
      k = k + 1;
    }
    if (k > 9){
      k = k - 10;
       flag = 1;
    }
    temp -> data = k;
    temp -> next3 = NULL;
    if (start3 == NULL){
      start3 = temp;
    }
    else{
      cur = start3;
      while (cur -> next3 != NULL){
        cur = cur -> next3;
      }
      cur -> next3 = temp;
    }
    list1 = list1 -> next1;
    list2 = list2 -> next2;
  }
}

void print_list3(){
  struct node3 *cur;
  if (start3 == NULL){
    printf("\nList-3 Is Empty.\n");
  }
  else{
    cur = start3;
    while(cur != NULL){
      printf("\n%d", cur -> data);
      cur = cur -> next3;
    }
  }
}

int main() {
  int img, n1, c = 0;
  int n, garbage, i = 0;
  printf("Enter Any number of Max 5 Digits for List-1: ");
  scanf("%d", &n1);
  int m1 = n1;
  while (m1 != 0){
    m1 = m1/ 10;
    c++;
  }
  while (i < c){
    if (n1 < 10 && n1 > 0){
      img = n1;
    }
    if (n1 < 100 && n1 >= 10){
      n = 10;
      garbage = n1 / n;
      img = garbage;
      garbage = garbage * n;
      n1 = n1 - garbage;
    }
    if (n1 < 1000 && n1 >= 100){
      n = 100;
      garbage = n1 / n;
      img = garbage;
      garbage = garbage * n;
      n1 = n1 - garbage;
    }
    if (n1 < 10000 && n1 >= 1000){
      n = 1000;
      garbage = n1 / n;
      img = garbage;
      garbage = garbage * n;
      n1 = n1 - garbage;
    }
    if (n1 < 100000 && n1 >= 10000){
      n = 10000;
      garbage = n1 / n;
      img = garbage;
      garbage = garbage * n;
      n1 = n1 - garbage;
    }
    insert1(&img);
    i++;
  }
  printf("List- 1");
  print_list1();
  printf("\nEnter Any number of Max 5 Digits for List-2: ");
  scanf("%d", &n1);
  m1 = n1;
  while (m1 != 0){
    m1 = m1/ 10;
    c++;
  }
  while (i < c){
    if (n1 < 10 && n1 >= 0){
      img = n1;
    }
    if (n1 < 100 && n1 > 10){
      n = 10;
      garbage = n1 / n;
      img = garbage;
      garbage = garbage * n;
      n1 = n1 - garbage;
    }
    if (n1 < 1000 && n1 > 100){
      n = 100;
      garbage = n1 / n;
      img = garbage;
      garbage = garbage * n;
      n1 = n1 - garbage;
    }
    if (n1 < 10000 && n1 > 1000){
      n = 1000;
      garbage = n1 / n;
      img = garbage;
      garbage = garbage * n;
      n1 = n1 - garbage;
    }
    if (n1 < 100000 && n1 > 10000){
      n = 10000;
      garbage = n1 / n;
      img = garbage;
      garbage = garbage * n;
      n1 = n1 - garbage;
    }
    insert2(&img);
    i++;
  }
  printf("List- 2");
  print_list2();
  list3();
  printf("\n\nList- 3");
  print_list3();
}
