#include<stdio.h>
//heap sort
void createnew(int []);
void down_adjust(int [],int);

int main()
{
  int Heap[30],num,i,last,temp; //can contain 30 elements in array
  printf("Enter number of elements:");
  scanf("%d",&num);
  printf("\nEnter elements:");
  for(i=1;i<=num;i++)
  scanf("%d",&Heap[i]);

  //createnew a Heap
  
  Heap[0]=num;
  createnew(Heap);
  
  //sorting
  
  while(Heap[0] > 1)
  {
  
  //swap Heap[1] and Heap[last]
  
    last=Heap[0];
    temp=Heap[1];
    Heap[1]=Heap[last];
    Heap[last]=temp;
    Heap[0]--;
    down_adjust(Heap,1);
  }

  //print sorted data
  
  printf("\nArray after sorting:\n");
  for(i=1;i<=num;i++)
  printf("%d ",Heap[i]);
  }

  void createnew(int Heap[])
  {
    int i,n;
    n=Heap[0]; //number of elements
    for(i=n/2;i>=1;i--)
    down_adjust(Heap,i);
  }

  void down_adjust(int Heap[],int i)
  {
    int j,temp,n,flag=1;
    n=Heap[0];
    while(2*i<=n && flag==1)
  {
    j=2*i; //j points to left child
    if(j+1<=n && Heap[j+1] > Heap[j])
    j=j+1;
    if(Heap[i] > Heap[j])
    flag=0;
    else
  {
    temp=Heap[i];
    Heap[i]=Heap[j];
    Heap[j]=temp;
    i=j;
  }
  }
}
