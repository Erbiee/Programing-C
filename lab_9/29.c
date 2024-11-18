#include <stdio.h>

int main()
{
    int arr[4][4] = {{1, 0, 0, 0},
                     {8, 2, 8, 0},
                     {8, 8, 3, 8},
                     {8, 8, 8, 4}};
    int size = 4;
    int cnt = 0;

    // Замена
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int x = arr[j][i];
            int y = arr[i][j];
            arr[j][i] = y;
            arr[i][j] = x;

            if (x == y)
            {
                cnt++;
            }
        }
    }

    // Минимальный элемент на главной диагонали
    int minel = 1000;
    for (int i = 0; i < size; i++)
    {
        if ((arr[i][i] > 0) && (arr[i][i] < minel))
        {
            minel = arr[i][i];
        }
    }

    // Вывести на экран
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Повторяется: %d\n", cnt);
    printf("Минимальный элемент: %d\n", minel);
}
