#include <stdio.h>
//power of any no using recursion
  int power(int no, int pwr){
    int p;
    if (pwr == 0){
      return 1;
    }
    else{
      p = no * power(no, pwr - 1);
      return p;
    }
  }

  int main() {
  int n, p, ans;
  printf("Enter Number: ");
  scanf("%d", &n);
  printf("Enter Power: ");
  scanf("%d", &p);
  ans = power(n, p);
  printf("The Answer is : %d", ans);
}
