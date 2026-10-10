#include <stdio.h>

int n,i,j;


int main(){
	scanf("%d",&n);
	printf("1*1=1\n");
	for(i=2;i<=n;i++){
		
		for(j=1;j<i;j++){
		
			printf("%d*%d=%d  ",i,j,i*j);
		} 
		printf("%d*%d=%d\n",i,j,i*j);	
		}
		
		j=1;
		
		
	
	
}
