#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>  
#include<string.h>
//infix to postfix
char stack[100];
int top = -1;

void push(char a){
  if (top >= 99){
    printf("Stack Overflow!!!");
  }
  else{
    top = top + 1;
    stack[top] = a;
  }
}

char pop(){
  char a;
  if (top < 0){
    printf("Stack Underflow!!!");
    return 0;
  }
  else{
    a = stack[top];
    top = top - 1;
    return a;
  }
}

int chk_oprator(char sym){
  if(sym == '^' || sym == '*' || sym == '/' || sym == '+' || sym =='-' ||sym == '|' || sym == '&' || sym == '<' ||sym == '>' ||sym == '!' ||sym == '=')
	{
		return 1;
	}
	else
	{
	return 0;
	}
}

int precedence(char s)
{
  if (s == '|'){
    return 1;
  }
  else if (s == '&' || s == '<' || s == '>' || s == '!'){
    return 2;
  }
  else if (s == '='){
    return 3;
  }
	else if(s == '+' || s == '-')        
	{
		return 4;
	}
  else if(s == '*' || s == '/')
	{
		return 5;
	}
  else if(s == '^')
	{
		return 6;
	}
  else if (s == '('){
    return 7;
  }
	else
	{
		return(0);
	}
}

void conversion(char in_exp[], char post_exp[]){
  int i = 0, j = 0;
  char item, x;
  push('(');
  strcat(in_exp,")");
  item = in_exp[i];
  while(item != '\0'){
    if(item == '(')
		{
			push(item);
		}
		else if( isdigit(item) || isalpha(item) || item == '<' || item == '>' || item == '=' || item == '!' || item == '#' || item == '&' || item == '|')
		{
			post_exp[j] = item;             
			j++;
		}
    else if(chk_oprator(item) == 1)       
		{
			x=pop();
			while(chk_oprator(x) == 1 && precedence(x)>= precedence(item))
			{
				post_exp[j] = x;             
				j++;
				x = pop();                    
			}
        push(x);
			

			push(item);                
		}
		else if(item == ')')        
		{
			x = pop();                   
			while(x != '(')                
			{
				post_exp[j] = x;
				j++;
				x = pop();
			}
		}
    else
		{ 
			printf("\nInvalid infix Expression.\n");   
			getchar();
			exit(1);
		}
		i++;


		item = in_exp[i];
	}
  
  // if(top>0)
	// {
	// 	printf("\nInvalid infix Expression.\n");      
	// 	getchar();
	// 	exit(1);
  //   // break;
	// // }

	// if(top>0)
	// {
	// 	printf("\nInvalid infix Expression.\n");      
	// 	getchar();
	// 	exit(1);
  //   // break;
	// }

  // }
	post_exp[j] = '\0';
}

int main() {
  char infix[100];
  char postfix[100];
  printf("\nEnter Infix expression : ");
  gets(infix);
  conversion(infix, postfix);
  printf("Postfix Expersion: ");
  puts(postfix);
  
}












  











