#include <stdlib.h>
#include <stdio.h>
#include <time.h>

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
}