#include <stdio.h>

//consecutive sort

// void rightswap (float *a, float *b){
//   float t = *a;
//   *a = *b;
//   *b = t;
// }


void swap(int *c, int *d){
  int t = *c;
  *c = *d;
  *d = t;
}


int main() {
  int arr[10];
  int l = 0;
  int m = 1;
  for (int i = 0; i < 10; i++){
    printf("Enter %d number: ", i + 1);
    scanf("%d", &arr[i]);
    printf("\n");
  }



  // for (int v = 0; v < 5; v++){
  //   rightswap(&arr[l],&arr[m]);
  //   l = l +2;
  //   m = m + 2;
  // }
  // for (int n = 0; n < 10; n++){
  //   printf(" %f,", arr[n]);
  // }

  int a = 0, b = 1;
  while (b < 10 ){
    swap(&arr[a], &arr[b]);
    a = a + 2;
    b = b + 2;




  }
     for (int n = 0; n < 10; n++){
    printf(" %d,", arr[n]);
  }



}
