#include <stdio.h>

// Selection Sorting Algorithm:
// In this algo, the min value in the array will be selected 1st then the algo will shift it to the left and the cycle will be going till the array got sorted out. 

// cur = current data, next = next data
int main() {
  int cur = 0;
  int next = cur + 1;
  int o = 9;
  int temp1 = 0;
  int temp2 = 0;
  int data[10]= {2, 9, 3, 22, 1, 12, 15, 56, 33, 11};
  for (int n = 0; n < 9; n++){
    for (int i =  0; i < o; i++){
      if (data[cur] > data[next] ){
          cur = next;
        }
      next++;
    }
		// Swapping the variable with min number to the left.
  	temp2 = data[temp1];
	  data[temp1] = data[cur];
	  data[cur] = temp2;
	  temp1++;
	  cur = temp1;
	  next = cur + 1;
	  o = o - 1;
  }
  for (int m = 0; m < 10; m++){
    printf(" %d,", data[m]);
  }
}
