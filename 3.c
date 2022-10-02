#include <stdio.h>
// Insert sorting algorithm
int main() {
  int data[6] = {12, 7, 15, 26, 2, 11};
  int c, f = 0;
  int j = f + 1;
  int o = 9;
  int l = 0;
  int m;
  int k = 0;
  for(int i = 0; i < 6; i++){
    if (data[f] > data[j] ){  
        c = f;                  
        m = data[f];             
        data[f] = data[j];     
        data[j] = m;             
        f++;                     
        j++;                   
      }
    else{
        f++;                   
        j++;                    
      }
  }
  printf("%d %d\n", f, data[f]);
  for (int m = 0; m < 6; m++){
    printf(" %d,", data[m]);
  }
}
