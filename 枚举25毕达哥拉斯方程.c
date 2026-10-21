#include <stdio.h>
int main(){
	long long n,a,b,c ;
	scanf("%lld",&n);
	for(a=1;;a++){
		for (b=2;;b++){
			for (c=3;;c++){
				if (a+b+c==n&&a*a+b*b==c*c){
					printf("%lld",a*b*c);
					break;
				}
				
				
			}
			break;
		}
		break;
	}
	return 0;
}
