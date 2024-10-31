#include <stdio.h>

int det(int N, int arr[N][N + 1])
{
    if (N == 2)
    {
        return arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
    }
    else if (N == 3)
    {
        int n1 = arr[0][0] * arr[1][1] * arr[2][2] + arr[0][1] * arr[1][2] * arr[2][0] + arr[0][2] * arr[1][0] * arr[2][1];
        int n2 = arr[0][2] * arr[1][1] * arr[2][0] + arr[0][1] * arr[1][0] * arr[2][2] + arr[0][0] * arr[2][1] * arr[1][2];
        return n1 - n2;
    }
}

void kr(int N, int arr[N][N + 1])
{
    if (det(N, arr) == 0)
    {
        printf("Нет единственного решения\n");
    }
    else if (N == 2)
    {
        int detx = arr[0][2] * arr[1][1] - arr[0][1] * arr[1][2];
        int dety = arr[0][0] * arr[1][2] - arr[0][2] * arr[1][0];
        printf("x = %d y = %d\n", detx / det(N, arr), dety / det(N, arr));
    }
    else if (N == 3)
    {
        int n1 = arr[0][3] * arr[1][1] * arr[2][2] + arr[0][1] * arr[1][2] * arr[2][3] + arr[0][2] * arr[1][3] * arr[2][1];
        int n2 = arr[0][2] * arr[1][1] * arr[2][3] + arr[0][1] * arr[1][3] * arr[2][2] + arr[0][3] * arr[2][1] * arr[1][2];
        int detx = n1 - n2;

        n1 = arr[0][0] * arr[1][3] * arr[2][2] + arr[0][3] * arr[1][2] * arr[2][0] + arr[0][2] * arr[1][0] * arr[2][3];
        n2 = arr[0][2] * arr[1][3] * arr[2][0] + arr[0][3] * arr[1][0] * arr[2][2] + arr[0][0] * arr[2][3] * arr[1][2];
        int dety = n1 - n2;

        n1 = arr[0][0] * arr[1][1] * arr[2][3] + arr[0][1] * arr[1][3] * arr[2][0] + arr[0][3] * arr[1][0] * arr[2][1];
        n2 = arr[0][3] * arr[1][1] * arr[2][0] + arr[0][1] * arr[1][0] * arr[2][3] + arr[0][0] * arr[2][1] * arr[1][3];
        int detz = n1 - n2;
        printf("x = %d y = %d z = %d\n", detx / det(N, arr), dety / det(N, arr), detz / det(N, arr));
    }
}

int main()
{
    int a[3][4] = {{2, -3, 1, -7},
                   {1, 2, -3, 14},
                   {-1, -1, 5, -18}};
    kr(3, a);

    int a2[2][3] = {{5, 2, 7},
                    {2, 1, 9}};
    kr(2, a2);

    int a3[3][4] = {{3, 2, 1, 1},
                    {6, 5, 4, -2},
                    {9, 8, 7, 3}};
    kr(3, a3);
}
