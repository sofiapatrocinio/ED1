#include <stdio.h>
#include <math.h>

int main(void)
{
    int num, aux = 1, tab = 0;
    scanf("%i", &num);

    if (num <= pow(10, 6) && num >= 1)
    {

        for (int i = 0; i < num; i++)
        {
            tab++;
        }

        for (int i = 1; i <= num; i++)
        {
            int j = aux;
            int h = tab - 1;

            while (h >= 1)
            {
                printf(" ");
                h--;
            }
            while (j >= 1)
            {
                printf("*");
                j--;
            }
            aux += 2;
            tab--;

            printf("\n");
        }
    }
    else
    {
        printf("O número deve ser entre 1 e 10^6\n/");
    }
    return 0;
}