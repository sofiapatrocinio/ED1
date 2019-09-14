#include <stdio.h>

int main(void)
{
    int num, produtos, menor;

    scanf("%d", &num);
    scanf("%d", &produtos);
    int rotulos[num];
    if (num <= 1000000 && num >= 1 && produtos <= 1000 && produtos >= 1)
    {
        for (int i = 1; i <= num; i++)
        {
            scanf("%d", &rotulos[i]);
        }

        int freq[1001];

        for (int i = 0; i <= 1000; i++)
        {
            freq[i] = 0;
        }

        for (int i = 1; i <= num; i++)
        {
            freq[rotulos[i]]++;
        }

        menor = freq[1];
        for (int i = 1; i <= produtos; i++)
        {
            if (freq[i] < menor)
            {
                menor = freq[i];
            }
        }

        printf("%d\n", menor);
    }
    return 0;
}
