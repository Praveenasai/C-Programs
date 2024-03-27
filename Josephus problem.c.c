#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i=1;
for(;n>=i;i=i<<1);
n=n-(i>>1);
printf("%d",(n*2)+1);
}