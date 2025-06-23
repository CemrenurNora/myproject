#include <stdio.h>
#include <stdlib.h>

int factorial(int a);
  int num;
int main(){
  printf("Enter a positive number:");
  scanf("%d",&num);
  factorial(num);
  return 0;
}
int factorial(int a){
  int i,fact=1;
  for(i=1;i<=num;++i){
    fact=i*fact;
  }
  printf("Factorial of %d is %d",num,fact);

}
