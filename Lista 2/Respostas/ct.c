#include <stdio.h>
#include <string.h>

struct tipoBanda
{
    char nome[80];
    int ano;
};

struct tipoShow
{
    char nome[80];
    int qtd;
    struct tipoBanda bandas[100];
};

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

int search(char *str, char *str2)
{
    int cont = 0;
    int size_str = size(str);
    int size_str2 = size(str2);
    if (size_str != size_str2)
        return 0;
    for (int i = 0; i < size_str; i++)
    {
        if (str[i] == str2[i])
            cont++;
        else
            break;
    }
    if (cont == size_str)
        return 1;
    return 0;
}

void pesquisarNomeBanda(char pesquisa[80], struct tipoShow shows[50], int n)
{
    int cont = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < shows[i].qtd; j++)
        {
            if (search(pesquisa, shows[i].bandas[j].nome))
            {
                printf("%s - ano %d\n", shows[i].nome, shows[i].bandas[j].ano);
                cont++;
            }
        }
    if (cont == 0)
        printf("Banda nao cadastrada\n");
}