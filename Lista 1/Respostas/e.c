#include <stdio.h>
#include <math.h>

int main(void)
{
    int num;
    scanf("%i", &num);

    if (num <= pow(10, 2) && num >= 1)
    {
        for (int i = 1; i <= num; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j < i)
                {
                    printf("%02d ", i);
                }
                else
                {
                    printf("%02d", i);
                }
            }
            printf("\n");
        }
        printf("\n");
        for (int i = 1; i <= num; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j < i)
                {
                    printf("%02d ", j);
                }
                else
                {
                    printf("%02d", j);
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("O número deve ser entre 1 e 10^2\n/");
    }
    return 0;
}