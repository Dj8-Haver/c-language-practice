#include <stdio.h> 

int main()

{
	int a = 0;
	printf("请输入您付款的数目:") ;
	scanf("%d",&a);
	int b = 100-a;
	printf("找您%d元",b);
	 return 0 ;
}

