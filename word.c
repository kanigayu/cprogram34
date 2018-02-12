#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int count=1,i,n;
gets(a);
n=strlen(a);
for(i=0;i<=n;++i)
{
	if(a[i]==' ')
	{
	 count=count+1;
	 }
}
	printf("\n%d",count);
	return 0;
}
