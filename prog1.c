#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter any two numbers");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("The swapped numbers are as follows: %d %d",a,b);
}
