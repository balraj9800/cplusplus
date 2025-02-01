#include<stdio.h>
#include<conio.h>
int a,b,c;
void main()
{
clrscr();
printf("\nEnter your First Value:");
scanf("%d",&a);
printf("\nEnter your First Value:");
scanf("%d",&b);
printf("\nEnter your First Value:");
scanf("%d",&c);
if(a>b&&a>c)
{
  printf("\n A is greater");
}
else if(b>a&&b>c)
{
  printf("\n B is greater");
}
else if(c>a&&c>b)
{
printf("\n C is greater");
}
else
{
printf("\n some Values are Equal");
}

getch();
}