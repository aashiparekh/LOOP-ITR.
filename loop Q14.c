#include<stdio.h>
#include<conio.h>
void main()
{int i;
float num, sum=0, mean;

printf("enter 10 numbers\n");
for(i=1; i<=10; i++) {
scanf("%f", &num);
sum = sum + num;}
 mean = sum/10;

printf("sum = %2f\n", sum);
printf("mean = %2f\n", mean);

return 0;
}
