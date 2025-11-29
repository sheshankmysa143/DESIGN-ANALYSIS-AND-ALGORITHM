#include <stdio.h>
int factorial(int n){
if (n == 0 || n == 1)
return 1;
else
return n * factorial(n - 1);
}
int main(){
int num, result;
printf("Enter a number: ");
scanf("%d", &num);
if (num < 0)
printf("negative.\n");
else{
result = factorial(num);
printf("factorial of %d is %d\n", num, result);
}
return 0;
}
