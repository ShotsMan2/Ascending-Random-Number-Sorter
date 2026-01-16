#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, sayi, array[99], gecici, j;

    srand(time(NULL));

    printf("n i girin ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        array[i] = rand() % 101;
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                gecici = array[j];
                array[j] = array[j + 1];
                array[j + 1] = gecici;
            }
        }
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}
