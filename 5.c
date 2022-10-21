#include <stdio.h>
// Simple Sort Algorithm
  int x = 55;
  int  y = 88;

void swap (int a, int b){
  int t = a;
  a = b;
  b = t;
}
void rightswap (int *a, int *b){
  int t = *a;
  *a = *b;
  *b = t;
}

int main() {
  swap (x, y);
  printf("%d , %d\n" , x, y);
// now it will gonna swap x and 
  rightswap(&x , &y);
  printf("%d , %d\n" , x, y);

}
