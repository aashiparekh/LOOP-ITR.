#include<stdio.h>
void main()
{int i, n;
float num, sum=0, mean;
 printf("enter value of n numbers");
 for(i=1; i<=n; i++)
 scanf("%f", &n);
 sum= sum + n;

 mean = sum/n;

printf("sum = %2f\n", sum);
printf("mean = %2f\n", mean);

return 0;
}
