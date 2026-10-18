#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    int i, j;  
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", abs(i - j));
        }
        printf("\n");
    }
    return 0;
}
