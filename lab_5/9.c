#include <stdio.h>

int main()
{
    char n = 0b00001010;
    char n2;
    int k = 128;

    for (int i = 1; i <= 128; i <<= 1)
    {
        if (n & i)
        {
            n2 += k;
        }
        k /= 2;
    }
    printf("%d %d\n", n, n2);
}