#include <stdio.h>
int main(){
	int n ,i,j;
	int num=0;
	scanf("%d",&n);
	for(i=1;;i++){
		for(j=1;j<=i;j++){
			
			
			num++;
			if(num==n){
				printf("%d",j);
				goto end; 
			}
		}
		
			
		
	}
	end:
	  return 0 ;
	
} 
 
