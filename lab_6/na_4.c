#include <stdio.h>

int main()
{
    int A[] = {3, 2, -3, 4};
    int B[] = {2, -2, 1, 3};
    int C[4];

    for (int i = 0; i < 2; i++)
    {
        C[i] = A[i] + B[i];
    }

    int max_Re = 0;
    for (int i = 0; i < 2; i += 2)
    {
        if (A[i] > max_Re)
        {
            max_Re = A[i];
        }
    }

    int cnt_neg = 0;
    for (int i = 1; i < 4; i += 2)
    {
        if (B[i] < 0)
        {
            cnt_neg++;
        }
    }

    float avg = 0;
    for (int i = 0; i < 4; i++)
    {
        avg += C[i];
    }
    avg /= 4;

    printf("Максимальное Re в A: %d\n", max_Re);
    printf("Количество Im меньше нуля в B: %d\n", cnt_neg);
    printf("Среднее значение в C: %0.2f\n", avg);
}
