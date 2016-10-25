#include<stdio.h>
#include<stdlib.h>
int main() {
char inputString[25];
printf("Enter the string to be converted to an integer: ");
gets(inputString);
printf("The converted integer is: %d",atoi(inputString));
return 0;
}
