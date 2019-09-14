#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int qnt_questoes, cont = 0;

    scanf("%i", &qnt_questoes);

    char *resposta = malloc(sizeof(int) * qnt_questoes);
    char *gabarito = malloc(sizeof(int) * qnt_questoes);

    for (int i = 0; i <= qnt_questoes; i++)
    {
        scanf("%c", &resposta[i]);
    }
    for (int j = 0; j <= qnt_questoes; j++)
    {
        scanf("%c", &gabarito[j]);
    }
    for (int i = 0; i <= qnt_questoes; i++)
    {
        if (resposta[i] == gabarito[i])
        {
            cont++;
        }
    }
    printf("%d\n", cont-1);
    free(gabarito);
    free(resposta);
    return 0;
}