#include<stdio.h>
int main()
{
long int a;
scanf("%ld",&a);
if(a>0 && a<=100000)
{
printf("Positive");
}
else if(a==0)
{
 printf("Zero"); 
}
else
{
  printf("Negative");
}
 return 0;
}
