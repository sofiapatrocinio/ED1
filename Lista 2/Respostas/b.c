#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int encaixa(int a, int b)
{
    int cont = 0, exp = 1, result, k = b;
    while (b != 0)
    {
        b = b / 10;
        cont++;
    }
    for (int i = 0; i < cont; i++)
    {
        exp = exp * 10;
    }
    int number = a % exp;
    if (number == k)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }

    return result;
}

int segmento(int a, int b)
{
    int kb, ka;

    int result, resultf;

    if (a >= b)
    {
        ka = a;
        kb = b;
    }
    else
    {
        ka = b;
        kb = a;
    }

    result = encaixa(ka, kb);

    while (ka != 0)
    {
        if (result == 0)
        {
            ka = ka / 10;
            result = encaixa(ka, kb);
        }
        else
        {
            resultf = 1;
            break;
        }
    }
    if (ka == 0)
    {
        resultf = 0;
    }
    return resultf;
}