#include<stdio.h>
int main() {
int n,rev;
printf("Enter the number: ");
scanf("%d",&n);
while(n!=0)
{
rev=rev*10;
rev=rev+n%10;
n=n/10;
}
printf("\n The reversed number of %d is:%d",rev);
return 0;
}
