#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
//expression tree

struct btnode
{
	char data;
	struct btnode *left;
	struct btnode *right;
};
struct btnode *btstack[100];
int top = -1;

struct btnode *pop(){
	struct btnode *a;
	if (top == -1){
		printf("Stack Underflow!!\n");
		return 0;
	}
	else{
		a = btstack[top];
		top--;
		return a;
	}
}


void push(struct btnode *a){
	if (top >= 99){
		printf("Stack Overflow!!\n");
	}
	else{
		top++;
		btstack[top] = a;
	}
}


void buildExTree(char postfix[]){
	int i = 0, j = 0;
	char item;
	struct btnode *x, *y;
	item = postfix[i];
	while (item != '\0'){
		if (isdigit(item) || isalpha(item))
		{
			struct btnode *temp;
			temp = (struct btnode *)malloc(sizeof(struct btnode));
			temp -> data = item;
			temp -> right = NULL;
			temp -> left = NULL;
			push(temp);
		}
		else if (item == '^' || item == '/' || item == '*' || item == '+' || item == '-' || item == '&' || item == '!' || item == '=' || item == '|' || item == '<' || item == '>')
		{
			x = pop();
			y = pop();
			struct btnode *temp;
			temp = (struct btnode *)malloc(sizeof(struct btnode));
			temp -> data = item;
			temp -> right = x;
			temp -> left = y;
			push(temp);
		}
		i++;
		item = postfix[i];
	}
}

void printpost(struct btnode *node){
	if (node == NULL){
		return;
	}
	printpost(node -> left);
	printpost(node -> right);
	printf("%c", node -> data);
}
void printin(struct btnode *node){
	if (node == NULL){
		return;
	}
	printin(node -> left);
	printf("%c", node -> data);
	printin(node -> right);
}

int main(){
	char post[100];
	printf("Enter Postfix Expression: ");
	gets(post);
	buildExTree(post);
	printpost(btstack[top]);
	printin(btstack[top]);
}
