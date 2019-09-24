#include<stdio.h>
int add(int a,int b)
{
if(!a)
return b;
else
return add((a&b)<<1,a^b);
}

int main()
{
int a,b;
scanf("%d %d",&a,&b);
printf("%d",add(a,b));
return 0;
}
