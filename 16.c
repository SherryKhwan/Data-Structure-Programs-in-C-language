// #include<stdio.h>

// int Fibonacci(int);

// int main()
// {
//    int n, i = 0, c;
//    printf("How Many Number You Would To See In Faconacci Series:");
//    scanf("%d",&n);
//    printf("Fibonacci series\n");
//    for ( c = 1 ; c <= n ; c++ )
//    {
//       printf("%d\n", Fibonacci(i));
//       i++; 
//    }
//    return 0;
// }
 
// int Fibonacci(int n)
// {
//    if ( n == 0 )
//       return 0;
//    else if ( n == 1 )
//       return 1;
//    else
//       return ( Fibonacci(n-1) + Fibonacci(n-2) );
// } 


#include <stdio.h>


int fab(int n){
	int a;
	if (n == 0){
		return 1;
	}
	if (n == 1){
		return 1;
	}
	else{
		a = fab(n - 1) + fab(n - 2);
		return a;
	}
}




int main(){
	int a, b, c, d, n, f;
	printf("Enter Number of Fabonacii Letters: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		a = fab(i);
		printf("%d\n", a);
	}
}
