#include <stdio.h>
#include <math.h>

int main(void)
{
    int N, M, P, A, B;
    int PAy, PAx, PBy, PBx;
    scanf("%i %i", &N, &M);
    scanf("%i", &P);

    PAy = 1;
    PAx = 1;
    PBy = M;
    PBx = N;

    for (int i = 1; i <= P; i++)
    {
        scanf("%i %i", &A, &B);

        if (A == 1)
        {
            PAy = PAy + 1;
        }
        else if (A == 2)
        {
            PAy = PAy - 1;
        }
        else if (A == 3)
        {
            PAx = PAx + 1;
        }
        else if (A == 4)
        {
            PAx = PAx - 1;
        }

        if (B == 1)
        {
            PBy = PBy + 1;
        }
        else if (B == 2)
        {
            PBy = PBy - 1;
        }
        else if (B == 3)
        {
            PBx = PBx + 1;
        }
        else if (B == 4)
        {
            PBx = PBx - 1;
        }

        if (PAy > M || PAx > N || PAy < 1 || PAx < 1)
        {
            for (int j = i; j < P; j++)
            {
                scanf("%i %i", &A, &B);
            }
            printf("PA saiu na posicao (%d,%d) no passo %d\n", PAx, PAy, i);
            break;
        }

        if (PBy > M || PBx > N || PBy < 1 || PBx < 1)
        {
            for (int j = i; j < P; j++)
            {
                scanf("%i %i", &A, &B);
            }
            printf("PB saiu na posicao (%d,%d) no passo %d\n", PBx, PBy, i);
            break;
        }

        if (PAy == PBy && PAx == PBx)
        {
            for (int j = i; j < P; j++)
            {
                scanf("%i %i", &A, &B);
            }
            printf("Encontraram-se na posicao (%d,%d) no passo %d\n", PAx, PAy, i);
            break;
        }
    }

    if (PAy != PBy && PAx != PBx && PBy <= M && PBx <= N && PBy >= 1 && PBx >= 1 && PAy <= M && PAx <= N && PAy >= 1 && PAx >= 1)
    {
        printf("Nao se encontraram\n");
    }

    return 0;
}