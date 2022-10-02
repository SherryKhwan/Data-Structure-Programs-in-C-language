#include <stdio.h>
//closed hashing with Ls
int main(void) {
  int a, x, m, e, s, h, size;
  float d, b;
  int f = 0;
  int c = 0;
  printf("Enter Size of Array: ");
  scanf("%d", &x);
  size = x - 1;
  float arr[size];
  for (int i = 0; i < x; i++){
    arr[i] = -1;
  }
  while (c < x){
    printf("Enter Data: ");
    scanf("%f", &d);
    if (d == -2){
      break;
    }
    e = d;
    m = e % x;
    int y = m + 1;
    if (arr[m] == -1){
      arr[m] = d;
    }
    else{
      while (arr[y] != -1){
        y++;
        if (y == size){
          y = 0;
        }
      }
      arr[y] = d;
    }
    c++;
  }
  for (int i = 0; i < x; i++){
    printf("\n%f", arr[i]);
  }
  printf("\n\nEnter Value To Search: ");
  scanf("%f", &b);
  h = b;
  s = h % x;
  int z = s + 1;
  if (arr[s] == b){
    printf("Value Found.");
    f = 1;
  }
  else{
    while (arr[z] != arr[s]){
      if(arr[z] == b){
        printf("Value Found.");
        break;
      }
      z++;
      if (z == size){
          z = 0;
      }
    }
    if (f == 0){
      printf("Value Not Found.");
    }
  }
}
