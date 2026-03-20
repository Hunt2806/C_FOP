#include <stdio.h>
#include <math.h>
#include <string.h>

void main() {
  int num;
  int num1;
  printf("Enter a number");
  scanf("%d", &num);
  num = num1;
  char str[20];
  sprintf(str, "%d", num1);
  sum = 0;
  length = strlen(num1);
  while(num!=0){
  for(i=0,i<length,i++)
      digit = num % 10;
      sum = sum + (digit * pow(2,i));
      num = num/10;
  }
  printf("The decimal number is, %d", sum);
}
