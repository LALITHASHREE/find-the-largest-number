#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the value of a,b and c");
scanf("%d%d%d",&a,&b,&c");
if(a>b)
{
printf("a is larger");
}
elseif(b>c)
{
printf("b is larger");
}
elseif(a>c)
{
printf("c is larger");
}
return0;
}
