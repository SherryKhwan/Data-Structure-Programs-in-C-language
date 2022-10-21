#include <stdio.h>

int main(void) {
    printf("\nBinary Searching Algorithm:");
    printf("\n==========================\n");
    int data[8]={6, 3, 9, 5, 1, 4, 7, 2};
    int temp1, temp2, temp3, temp4, cur = 0;
    int next = cur + 1;
    int o = 7;
    for (int n = 1; n < 8; n++){
    for (int i =  0; i < o; i++){
      if (data[cur] > data[next] ){
          cur = next;
        }
      next++;
    }
   temp1 = cur;
   temp3 = temp2;
   temp4 = data[temp2];
   data[temp3] = data[cur];
   data[temp1] = temp4;
   cur = n;
   next = cur + 1;
   temp2++;
   o--;
  }
    int tosearch, mp , r = 8;
	  int p = 0;
	  int flag=0;
	  printf("\nEnter Value to Search: ");
	  scanf("%d", &tosearch);
	  while (p<=r){
	    mp=(p+r)/2;
      if (tosearch == data[mp]){
    	  printf("Value Found");
    	  flag=1;
	      break;
        }
      if(tosearch < data[mp]){    	
        r=mp-1;}
      else{
    	  p=mp+1;
      }
    }
    if(flag==0){
        printf("Value Not Found");
      }
}
