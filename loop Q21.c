#include<stdio.h>
#include<conio.h>
void main()
{int num, digit;
printf("enter a number: ");
scanf("%d", &num);

printf("digits in reverse order");
while(num>0){
digit=num%10;
printf("%d", digit);
num=num/10;
}
return 0;
}
