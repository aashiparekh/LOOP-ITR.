#include<stdio.h>
#include<conio.h>
void main()
{int num, count=0
printf("enter a number: ");
scanf("%d", &num);

if(num==0)
{count=1;}
else if(num!=0)
num=num\10;
count++;

primtf("count the number of digits in the number: ");

return 0;
}
