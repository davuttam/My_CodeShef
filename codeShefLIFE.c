#include<stdio.h>
int main()
{
int a;
float b;
scanf("%d %f",&a,&b);
if(b>=a+0.5 && a%5==0)
{
b=b-a-0.5;
printf("%.2f\n",b);
}
else
printf("%.2f\n",b);
return 0;
}
