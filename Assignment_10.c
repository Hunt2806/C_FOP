#include <stdio.h>
#include <math.h>

int main(){
  char operator;
  double num1, num2, result;
  printf("Enter number 1: ");
  scanf(" %d", &num1);
  printf("\n Enter number 2: ");
  scanf(" %d", &num2);
  printf("\n Enter an operator: (+,-,*,/,^,!)");
  scanf(" %c", &operator);
  switch(operator)
  {
  case '+': 
  result = num1 + num2;
  printf("%d is the result", result);
  break;

  case '-':
  result = num1 - num2;
  printf("%d is the result", result);
  break;

  case '*':
  result = num1 * num2;
  printf("%d is the result", result);
  break;

  case '/':
  if (num2 == 0)
  printf("Can't divide by 0");
  else
  {
    result = num1 / num2;
    printf("%d is the result", result);
  }
break;

  case '^':
  result = pow(num1, num2);
  printf("%d is the result", result);
  break;

  case '!':
  if(num1 < 0)
    printf("Factorial is not defined for negative numbers");
  else if(num1 == 0 || num1 == 1)
    printf("Factorial of %d is 1", (int)num1);
  else
  {
    result = 1;
    for(int i = 2; i <= num1; i++)
      result *= i;
    printf("Factorial of %d is %d", (int)num1, (int)result);
  }
  break;
  }
return 0;
}
