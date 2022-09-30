#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void selecao(int *vet, int n)
{

    int Menor, aux;

    for (int i = 0; i < n - 1; i++)
    {
        Menor = i;
        
        for (int j = i + 1; j < n; j++)
        {
            if (vet[Menor] > vet[j])
                Menor = j;
        }
        if (i != Menor)
        {
            aux = vet[i];
            vet[i] = vet[Menor];
            vet[Menor] = aux;
        }
    }
}

int main()
{
    int N, *vet, i;
    srand(time(NULL));

    scanf("%d", &N);

    vet = malloc(sizeof(int) * N);

    for (i = 0; i < N; i++)
    {
        *(vet + i) = rand() % 100;
    }
    for (i = 0; i < N; i++)
    {
        printf("%d ", *(vet + i));
    }

    selecao(vet, N);

    for (int i = 0; i < N; i++)
    {
        printf("%d - ", *(vet + i));
    }
}