#include <stdio.h>
int main(void)
{
    int n, i;
    int sum = 0;
    double item;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i <= 9)
        {
            item = i + (i+1)*0.1;
        }
        else
        {
            item = i + (i+1)*0.01;
        }
        sum += item * 100;

        if(i > 1)
            printf("+");
        if(i <=9)
        {
            if(i+1 == 10)
                printf("%d.%d", i, (i+1)%10);
            else
                printf("%d.%d", i, i+1);
        }
        else
        {
            printf("%d.%d", i, i+1);
        }
    }
    printf("=%.2f", sum / 100.0);
    return 0;
}

