#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
for(i=0;i<+15;i++)
sum=sum+i;
printf("\n sum of ",sum);
for(i=15;i<=45;i++)
if(i%2==0)
{
sum=sum+1;
}
else
{
sum=sum+0;
}
printf("\n sum",sum);
getch();
}

