#include<stdio.h>
int main()
{
int a[1000000],t,p,w=0,i,j;
scanf("%d",&t);

for(i=0;i<t;i++)
{
w=0;
scanf("%d",&p);
for(j=0;j<p;j++)
scanf("%d",&a[j]);
for(j=1;j<p;j++)
{
if(a[j]!=a[j-1])
{
w=w+2;

if((a[j]!=a[j+1]) && (j!=p-1))
w=w-1;
}
}
printf("%d\n",w);
}
return 0;
}

