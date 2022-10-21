#include <stdio.h>

// Bubble Sorting Algorithm:
// In bubble sorting, we will compare 2 values and if the next val is greater than our current value we will swap it right away and after the first full iteration the biggest number will be at the last position.

// cur = current, next = next value

int main() {
  int cur = 0;
  int next = cur + 1;
  int o = 9;
  int temp = 0;
  int data[10]= {9, 2, 3, 22, 1, 12, 15, 56, 33, 11};
  for (int n = 0; n < 9; n++){
    for (int i =  0; i < o; i++){
      if (data[cur] > data[next] ){  
        temp = data[next];
        data[next] = data[cur];
        data[cur] = temp;
      }
        cur++;                   
        next++;                    
    }
    cur = 0;
    next = cur + 1;
    o = o - 1;
  }
    for (int m = 0; m < 10; m++){
    printf(" %d,", data[m]);
  }
}
