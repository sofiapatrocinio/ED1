#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, cont = 0;

    while (scanf("%d", &x) != EOF)
    {
        if (x <= pow(10, 7) && x >= 0)
        {
            cont++;
        }
        else
        {
            printf("Insira um numero de 0 a 10^7\n");
        }
    }

    printf("%d\n", cont);

    return 0;
}