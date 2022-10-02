#include <stdio.h>
// Factorial with recusrion
int fact(int x){
  int f;
  if (x == 0){
    return 1;
  }
  else {
    f = x * fact(x-1);
    return f;
  }
}

int main() {
  int n, ans;
  printf("Enter Number: ");
  scanf("%d", &n);
  ans = fact(n);
  printf("Factorial is : %d", ans);
}
