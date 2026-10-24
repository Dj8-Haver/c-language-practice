#include <stdio.h>
int main(){
	int n,i ;
	scanf("%d",&n);
	int num[4];
	
	
	int money[4]={10,5,2,1} ;
	 
	int t = n; 
	for(i=0;i<4;i++) {
		num[i]=t/money[i];
		t=t%money[i];
		}
		
	for(i=3;i>=0;i--)	{
		if(num[i]!=0){
			
		
			printf("%d=%d\n",money[i],num[i]);
		}
	}
	return 0; 
}
