#include <stdio.h>

// Insertion Sorting Algorithm:
// As soon as the algo finds smaller value compared with current val, it will compare that small value to all the previous values and the smallest value will b placed at left in the 1st iteration.

// cur = current value, next = next value, prev = previous value, temp = temp variable used for swapping, temp2 = temp var used to store current's value.

int main() {
  int data[6] = {12, 7, 15, 26, 2, 11};
  int cur = 0;
  int next = cur + 1;
  int o = 9;
  int l = 0;
  int temp;
  int k = 0;
  for(int i = 0; i < 5; i++){
    if (data[cur] > data[next] ){  
      temp = data[cur];             
      data[cur] = data[next];     
      data[next] = temp;
			int temp2 = cur;
			int prev = cur - 1;
			for (int c = cur; c > 0; c--){
				if (data[temp2] < data[prev]){
					temp = data[temp2];
					data[temp2] = data[prev];
					data[prev] = temp;
					temp2--;
					prev--;
				}			
			}
    }
    cur++;                   
    next++;                    
  }
  for (int m = 0; m < 6; m++){
    printf(" %d,", data[m]);
  }
}
