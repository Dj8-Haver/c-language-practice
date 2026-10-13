#include <stdio.h>
int n,c,sum;
int main()
{
	int a = 10;
	scanf("%d",&n);
	for(sum=0;n%a>0;sum+=c ){
		c=n%a;
		n-=c;
		n/=10;
	}
	printf("%d",sum);
	return 0 ;
}
