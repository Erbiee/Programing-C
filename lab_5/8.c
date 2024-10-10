#include <stdio.h>

int main()
{
    char n = 0b00000111;
    int cnt = 8;

    for (int i = 1; i <= 128; i <<= 1)
    {
        if ((n & i) == 0)
        {
            break;
        }
        cnt--;
    }
    printf("%d\n", cnt);
}