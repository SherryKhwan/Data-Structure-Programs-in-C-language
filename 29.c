#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
//postfix aval

char stack[100];
int top = -1;


void push(int k){
	top++;
	stack[top] = k;
}

int pop(){
	int l = stack[top];
	top--;
	return l;
}

void conversion(char post_exp[]){
	char item, x, dig;
	int i = 0, j = 0, a, b, c;
	// push('(');
	strcat(post_exp, ")");
	item = post_exp[i];
	while(item != ')'){
		if (isdigit(item)){
			push(item - '0');
		}
		else if (item == '+' || item == '-' || item == '*' || item == '/' || item == '^'){
			a = pop();
			b = pop();
			switch(item){
				case '+':
					c = b + a;
					break;
				case '-':
					c = b - a;
					break;
				case '*':
					c = b * a;
					break;
				case '/':
					c = b / a;
					break;
				case '^':
						c = pow(b, a);
					break;
			}
			push(c);
		}
		i++;
		item = post_exp[i];
	}
	printf("The Result is: %d", pop());
}



int main(){
	int i = 0, k = 0;
	char al, as, postfix[100];
	int dig;
	printf("Enter Postfix Expression: ");
	gets(postfix);
	al = postfix[i];
	while(al != '\0'){
		if (isalpha(postfix[i])){
			printf("Enter value of %c: ", al);
			scanf("%d", &dig);
			as = dig + '0';
			k = i;
			while(postfix[k] != '\0'){
				if (al == postfix[k]){
					postfix[k] = as;
				}
				k++;
			}
		}
		i++;
		al = postfix[i];
	}
	conversion(postfix);
	}
