#include <stdio.h>

int is_prime(int n)
{
    for (size_t i = 2; i < n; i++)
    {
        if ((n % i) == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int Z[] = {5, 12, 13, 5, 7, 8, 11, 7};

    int cnt = 0; // Количество серий простых цифр
    int t = 0;
    for (int i = 0; i < 8; i++)
    {
        if (is_prime(Z[i]) && t == 0)
        {
            t = 1; // Когда находим первое простое число в серии t = 1
            cnt++;
        }
        else if (is_prime(Z[i]) == 0)
        {
            t = 0;
        }
    }
    printf("%d\n", cnt);

    t = 0;
    for (int i = 7; i >= 0; i--)
    {
        if (is_prime(Z[i]))
        {
            Z[i] = 0;
            t = 1; // Когда находим первое от конца массива простое число t = 1
        }
        if (is_prime(Z[i]) == 0 && t == 1)
        {
            break;
        }
    }
}