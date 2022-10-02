#include <stdio.h>
// Selection Sorting Algorithm:
int main() {
  int a, c, f = 0;
  int j = f + 1;
  int o = 9;
  int l = 0;
  int m;
  int k = 0;
  int size = a - 1;
  int data[10]= {2, 9, 3, 22, 1, 12, 15, 56, 33, 11};
  for (int n = 0; n < 9; n++){
    for (int i =  0; i < o; i++){
      if (data[f] > data[j] ){
          f = j;
        }
      j++;
    }

  k = data[l];
    data[l] = data[f];
    data[f] = k;
    l++;
    f = l;
    j = f + 1;
  o = o - 1;

  }
  
  for (int m = 0; m < 10; m++){
    printf(" %d,", data[m]);
  }
 
}
