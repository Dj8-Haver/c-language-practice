#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    FILE *fp;
    double x;
    int first = 1;   // 标记是否是第一个数，用来控制空格

    scanf("%d", &n);

    // 第一步：写入 rr.dat，每行一个，保留6位小数
    fp = fopen("rr.dat", "w");
    for(i = 1; i <= n; i++)
    {
        x = sqrt(i);
        fprintf(fp, "%.6f\n", x);
    }
    fclose(fp);

    // 第二步：重新打开读取，输出，空格分隔，末尾无空格
    fp = fopen("rr.dat", "r");
    while(fscanf(fp, "%lf", &x) == 1)
    {
        if(first)
        {
            printf("%.6f", x);
            first = 0;
        }
        else
        {
            printf(" %.6f", x);
        }
    }
    fclose(fp);
    printf("\n");

    return 0;
}

