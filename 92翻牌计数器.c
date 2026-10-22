#include <stdio.h>
int main(){
	int count=0;
	int i,s,t;
	char one[7];
	char two[7];
	scanf("%s",one);
	scanf("%s",two);
	char a=one[i]-'A';
	char b = two[i]-'A';
	for(i=0;i<2;i++){
		char a=one[i]-'A';
		char b = two[i]-'A';
		s=(b-a+26)%26; 
		count+=s;
	}
	for(i=2;i<6;i++){
		char a=one[i]-'0';
		char b = two[i]-'0';
		t=(b-a+10)%10; 
		count+=t;
	}
	printf("%d",count);
	return 0;
}
  
