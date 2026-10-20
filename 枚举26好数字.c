#include <stdio.h>
#include <math.h>
void f(long long b);
void g(long long b);
int main(){
	long long n ;
	
	scanf("%lld",&n);
	if(n%2==0){
		f(n);
		
	}else{
		g(n);
	}
	
	void f(long long num){
		int b,c,i,d;
		for(b=pow(10,num),d=0;b<pow(10,num+1);b++){
			char s[100];
			sprintf("s,%lld,b");
			for(i=0;i<=num;i+=2){
				if((s[i]-'0')%2!=0){
					c=0;
				}else{
					c=1;
				}
				
				
				
			}
			for(i=1;i<num;i+=2){
				if((s[i]-'0')==2||(s[i]-'0')==3||(s[i]-'0')==5||(s[i]-'0')==7){
					c=1;
				}else{
					c=0;
				}
			if(c==1){
				d+=1;
			}
			printf("%d",c);	
		}
	}
	
	void g(long long num){
		int b,c,i,d;
		for(b=pow(10,num),d=0;b<pow(10,num+1);b++){
			char s[100];
			sprintf("s,%lld,b")
			for(i=1;i<num;i+=2){
				if((s[i]-'0')%2!=0){
					c=0;
				}else{
					c=1;
				}
				
				
				
			}
			for(i=0;i<=num;i+=2){
				if((s[i]-'0')=2||(s[i]-'0')=3||(s[i]-'0')=5||(s[i]-'0')=7){
					c=1;
				}else{
					c=0;
				}
			if(c==1){
				d+=1;
			}
			printf("%d",c);	
		}
	}	
		
  return 0 ;	
} 
