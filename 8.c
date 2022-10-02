	#include <stdio.h>

//Menu driven program

struct student{
  char name[20];
  int marks;
  float gp;
};

void linear(int *a, int *b, int *c){
    printf("\nLinear Searching Algorithm:");
    printf("\n==========================\n");
    int data[3]={*a, *b, *c};
	  int flag=0;
	  int search;
    printf("\nEnter marks to Search: ");
    scanf("%d", &search);
	  for(int i=0; i<3; i++){
	    if(search == data[i]){
	      printf("\nValue found at index: %d",i);
	      flag=1;
	      break; 
	   }
  	}
	  if(flag == 0){
	    printf("\nValue not found");
	  }
}

void binary(int *a, int *b, int *c){
    printf("\nBinary Searching Algorithm:");
    printf("\n==========================\n");
    int data[3]={*a, *b, *c};
    int q, f = 0;
    int j = f + 1;
    int o = 2;
    int l = 0;
    int m;
    int k = 0;
    for (int n = 1; n < 3; n++){
    for (int i =  0; i < o; i++){
      if (data[f] > data[j] ){
          f = j;
        }
      j++;
    }
   q = f;
   l = k;
   m = data[k];
   data[l] = data[f];
   data[q] = m;
   f = n;
   j = f + 1;
   k = k + 1;
   o = o - 1;
  }
    int tosearch, mp , r = 3;
	  int p=0;
	  int flag=0;
	  printf("\nEnter Value to Search: ");
	  scanf("%d",&tosearch);
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

void selection(float *a, float *b, float *c){
  printf("\nSorting of CGPA By Selection Sorting Algorithm:");
  printf("\n===============================================\n\n");
  int q, f = 0;
  int j = f + 1;
  int o = 2;
  int l = 0;
  int m;
  int k = 0;
  int data[3]= {*a, *b, *c};
  for (int n = 1; n < 3; n++){
    for (int i =  0; i < o; i++){
      if (data[f] > data[j] ){
          f = j;
        }
      j++;
    }
   q = f;
   l = k;
   m = data[k];
   data[l] = data[f];
   data[q] = m;
   f = n;
   j = f + 1;
   k = k + 1;
   o = o - 1;
  }
  for (int m = 0; m < 3; m++){
    printf(" %d,", data[m]);
  }
}

void bubble(float *a, float *b, float *c){
  printf("\nSorting of CGPA By Bubble Sorting Algorithm:");
  printf("\n===========================================\n\n");
  int q, f = 0;
  int j = f + 1;
  int o = 2;
  int l = 0;
  int m;
  int k = 0;
  int data[3]= {*a, *b, *c};
  for (int n = 1; n < 10; n++){
    for (int i =  0; i < o; i++){
      if (data[f] > data[j] ){  
        q = f;                  
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
    f = 0;
    j = f + 1;
    o = o - 1;
  }
    for (int m = 0; m < 3; m++){
    printf(" %d,", data[m]);
  }
}

int main() {
  struct student s1;
  printf("Enter Name: ");
  scanf("%s", s1.name);   
  printf("Enter Marks: ");
  scanf("%d", &s1.marks);
  printf("Enter CGPA: ");
  scanf("%f", &s1.gp);
  
  struct student s2;
  printf("\nEnter Name: ");
  scanf("%s", s2.name);   
  printf("Enter Marks: ");
  scanf("%d", &s2.marks);
  printf("Enter CGPA: ");
  scanf("%f", &s2.gp);

  struct student s3;
  printf("\nEnter Name: ");
  scanf("%s", s3.name);   
  printf("Enter Marks: ");
  scanf("%d", &s3.marks);
  printf("Enter CGPA: ");
  scanf("%f", &s3.gp);

  int n;
  printf("\nChoose a Function:\n (1) Apply Linear Search To Find Marks.\n (2) Apply Binary Search To Find Marks.\n (3) Sort The Students A/c to their GP (Selection Method)\n (4) Sort The Students A/c to their GP (Bubble Method)\n\nEnter Any Number: ");
  scanf("%u", &n);

  if (n == 1){
    linear(&s1.marks, &s2.marks, &s3.marks);
  }

  if (n == 2){
    binary(&s1.marks, &s2.marks, &s3.marks);
  }

  if (n == 3){
    selection(&s1.gp, &s2.gp, &s3.gp);
  }

  if (n == 4){
    bubble(&s1.gp, &s2.gp, &s3.gp);
  }
}
  
