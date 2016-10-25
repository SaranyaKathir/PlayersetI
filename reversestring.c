#include<stdio.h>
#include<string.h>
int main() {
char str[100];
char *rev;
printf("Enter the string: ");
scanf("%d",&str);
rev=strrev(str);
printf("\n The reversed string is:%s",rev);
return 0;
}
