#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// infix to prefix

char stack[100];
int top = -1;

void push(char a){
  if (top > 99)
  {
      printf("Stack Overflow!!");
  }
  else{
    top++;
    stack[top] = a;
  }
}

char pop(){
  char a;
  if (top == -1)
  {
      printf("Stack Underflow!!");
      return 0;
  }
  else{
      a =stack[top];
      top--;
      return a;
  }
}

int chk_operator(char sym){
  if (sym == '!' || sym == '&' || sym == '>' || sym == '<' || sym == '|' || sym == '=' || sym == '+' || sym == '-' || sym == '*' || sym == '/' || sym == '^'){
    return 1;
  }
  else{
    return 0;
  }
}

int precedence(char s){
    if (s == '|')
    {
        return 1;
    }
    else if (s == '&' || s == '>' || s == '<' || s == '!')
    {
      return 2;
    }
    else if (s == '=')
    {
        return 3;
    }
    else if (s == '+' || s == '-')
    {
        return 4;
    }
    else if (s == '*' || s == '/'){
      return  5;
    }
    else if (s == '^')
    {
      return 6;
    }
    else if (s == '(')
    {
        return 7;
    }
    else{
      return 0;
    }
}

void conversion(char in_exp[], char post_exp[]){
  char item, x;
  int i = 0 , j = 0 ;
  push('(');
  strcat(in_exp, ")");
  item = in_exp[i];
  while(item != '\0'){
    if (item == '(')
    {
        push(item);
    }
    else if (isdigit(item) || isalpha(item) || item == '|' || item == '&' || item == '<' || item == '>' || item == '!' || item == '=')
    {
        post_exp[j] = item;
        j++;
    }
    else if (chk_operator(item) == 1)
    {
      x = pop();
      while(chk_operator(x) == 1 && precedence(x) >= precedence(item)){
        post_exp[j] = x;
        j++;
        x = pop();
      }
      push(x);
      push(item);
    }
    else if (item == ')')
    {
      x = pop();
      while(x != '('){
        post_exp[j] = x;
        j++;
        x = pop();
      }
    }
    else{
      printf("Invalid Expression!!");
    }
    i++;
    item = in_exp[i];
  }
  post_exp[j] = '\0';
}


int main(){
  // int n = 0, k = 0, c = 0;
  // char infix[100], postfix[100],temp[100], temp2[100], prefix[100];
  // gets(infix);
  // while (infix[n] != '\0'){
  //   n++;
  // }
  // for (int i = n; i >= 0; i--){
  //   temp[c] = infix[i];
  //   c++;
  // }
  // puts(temp);
  // c = 0;
  // for (int i = n; i > 0; i--){
  //   prefix[i] = temp[c];
  //   c++;
  // }


char prefix[50], temp[50], temp1[50];
  char infix[50];
  printf("Enter Infix Expression: ");
  gets(infix);
  int a, b = 0, c = 0;
  while (infix[c] != '\0'){
    c++;
  }
  int i = c - 1;
  while (c >= b){
    temp[b] = infix[i];
    b++;
    i--;
  }
  puts(temp);
  conversion(temp, temp1);
  puts(temp1);
  i = c - 1; b = 0;
  while (c >= b){
    prefix[b] = temp1[i];
    b++;
    i--;
  }
  printf("The Prefix Expression is: ");
  puts(prefix);


}



  


