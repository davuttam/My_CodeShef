#include<stdio.h>
int main()
{
int n,a,k,i,j=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a);
if(a%k==0)
{
j=j+1;
}
}
printf("%d\n",j);
return 0;
}
