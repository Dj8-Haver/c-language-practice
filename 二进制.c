#include <stdio.h>
void num(int n);

int main(){
    int n;
    scanf("%d",&n);
    num(n);
    return 0;
}

void num(int a){
    int exp[32]; // 存二进制位等于1的指数
    int i = 0;
    int count = 0;
    int t ;

    while(a > 0){
        if(a % 2 == 1){
            exp[i++] = count;
        }
        a = a / 2;
        count++;
    }

    //倒序输出
    int j;
    for(j = i - 1; j >= 0; j--){
        if(exp[j] == 1){
            printf("2");
        }else{
            t=exp[j];
            num(t);
            printf("2(%d)",t);
            return;
        

        }
        if(j > 0){
            printf("+");
        }
    }
   
}



