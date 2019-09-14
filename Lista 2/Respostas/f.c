#include <stdio.h>
#include <stdlib.h>

int size(char *input)
{
    int cont = 0, set = 0;

    while (*(input + set) != '\0')
    {
        cont++;
        set++;
    }
    return cont;
}

int search(char *input, char *subs, int size, int i)
{
    int cont = 0, n = i + size, j = 0;

    for (i; i < n; i++)
    {
        if (input[i] == subs[j])
        {
            cont++;
        }
        else
        {
            return 0;
        }
        if (cont == size)
        {
            return cont;
        }
        j++;
    }
    printf("%d\n", cont);
    return 0;
}
int main(void)
{

    char input[10000], subs[40], subt[40];

    scanf("%[^\n]", input);

    scanf("%s", subs);
    scanf("%s", subt);

    int size_input = size(input);
    int size_subs = size(subs);
    int size_subt = size(subt);
    // printf("%i", size_input);

    for (int i = 0; i < size_input; i++)
    {
        if (search(input, subs, size_subs, i))
        {
            printf("%s", subt);
            i += size_subs - 1;
        }
        else
        {
            printf("%c", input[i]);
        }
    }

    printf("\n");
    return 0;
}