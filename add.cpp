#include<stdio.h>
#include<conio.h>
main()
{
int l,x,s,m;
printf("enter the number:-\t");
scanf("%d",&l);
printf("enter digit number:-\t");
scanf("%d",&x);
while(x>0)
{
m = x%10;
s = s+m;
x = x/10;
}
printf("sum is = %d",s);
getch();
}