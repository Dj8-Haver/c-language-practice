#include <stdio.h>

int f(int a);
int main(){
	int n ;
    scanf("%d",&n);
	
	if(n==1){
		printf("1");
		
	}else{
		f(n);
		
		
	}
	
}
int f(int a){
	printf("%d ",a);
	do{
		 
		if(a%2==0){
			a/=2;
			if(a==1){
				printf("%d",a);
			} else{
				printf("%d ",a);
			}
			
		}else{
			a=a*3+1;
			printf("%d ",a);
		}
	}while(a!=1);
	
}
