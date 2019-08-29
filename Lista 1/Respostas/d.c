#include <stdio.h>
#include <math.h>

int main(void)
{
    int m3, price;
    scanf("%i", &m3);

    if (m3 <= pow(10, 3) && m3 >= 0)
    {
        if (m3 > 10)
        {
            if (m3 > 10 && m3 <= 30)
            {
                price = m3 - 3;
            }
            if (m3 > 31 && m3 <= 100)
            {
                price = (m3 - 30) * 2;
                price = price + 27;
            }
            if (m3 >= 101)
            {
                price = (m3 - 100) * 5;
                price = price + 167;
            }
        }
        else
        {
            price = 7;
        }
        printf("%d\n", price);
    }
    else {
        printf("O número deve ser entre 0 e 10³\n/");
    }
    return 0;
}