#include <studio.h>

int main(){
  int num, i;

printf("Enter a number");
scanf("%d", &num);

printf("Multiplication Table: ");

for(i=1; i<=10; i++) {
  printf("%d x %d = %d\n", num, i, num * i);
  }
return 0;
}
