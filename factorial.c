#include<stdio.h>
int main() {
int i,n;
unsigned long long factorial=1;
printf("Enter the number: ");
scanf("%d",&n);
if(n<0) {
printf("Error! Negative values doesn't exist.");
}
else {
for(i=1;i<=n;++i)
{
factorial=factorial*n;
} }
printf("The factorial of %d is: %llu",n,factorial);
return 0;
}
