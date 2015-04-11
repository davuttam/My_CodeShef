#include<stdio.h>
#include<string.h>
int main()
{
char s[110];
int a=0,i,n;
scanf("%d",&n);
while(n--)
{
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='A' || s[i]=='D' || s[i]=='O' || s[i]=='P' || s[i]=='R' || s[i]=='Q' )
++a;
else if(s[i]=='B')
a += 2;
}
printf("%d\n",a);
a=0;
 }
return 0;
}
