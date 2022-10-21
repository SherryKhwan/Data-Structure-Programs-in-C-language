#include <stdio.h>

void swap(int *c, int *d){
  int t = *c;
  *c = *d;
  *d = t;
}

int main() {
  int arr[10];
  for (int i = 0; i < 10; i++){
    printf("Enter %d number: ", i + 1);
    scanf("%d", &arr[i]);
    printf("\n");
  }
  int val1 = 0, val2 = 1;
  while (val2 < 10 ){
    swap(&arr[val1], &arr[val2]);
    val1 = val1 + 2;
    val2 = val2 + 2;
  }
  for (int n = 0; n < 10; n++){
  	printf(" %d,", arr[n]);
	}
}
