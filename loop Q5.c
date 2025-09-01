#include<stdio.h>
#include<conio.h>
void main() {
int i, n;

printf("enter number of odd numbers to print: ");
scanf("%d", &n);
 for(int i=1; i<=n; i++)
  printf("%d", 2*i - 1);

  return 0;
  }
