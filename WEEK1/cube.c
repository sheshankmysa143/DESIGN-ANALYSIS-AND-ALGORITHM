#include <stdio.h>
int main(){
  int n,i,sum=0;
 printf("enter a number n:\n");
 scanf("%d",&n);
for(i=1;i<=n;i++){
      sum+=i*i*i;
      }
 printf("the cube of %d natural numbers is %d",n,sum);
 return 0;
 } 
