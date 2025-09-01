#include<stdio.h>
void main()
{int i;
printf("numbers from 1 to 100 divisible by 5 are:\n");

for(i=1; i<=100; i++)
{ if(i%5 ==0)
printf("%d", i);}

return 0;
}
