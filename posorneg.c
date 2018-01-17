#include<stdio.h>
void main()
{
int value;
printf("Enter any number");
scanf("%d",&value);
if(value<0)
printf("Negative number");
else if(value>0)
printf("positive number");
else
printf("number is zero");
getch();
}
