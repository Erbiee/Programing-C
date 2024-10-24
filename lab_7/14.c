// Определить, есть ли в заданном предложении цифры. И если есть, найти их сумму.

#include <stdio.h>

int main()
{
    char s[] = "4Duis aute irure dolor 5in reprehen1derit";
    int sum = 0;

    for (int i = 0; i < sizeof(s); i++)
    {
        if (48 <= (int)s[i] && (int)s[i] <= 57)
        {
            switch (s[i])
            {
            case '1':
                sum += 1;
                break;
            case '2':
                sum += 2;
                break;
            case '3':
                sum += 3;
                break;
            case '4':
                sum += 4;
                break;
            case '5':
                sum += 5;
                break;
            case '6':
                sum += 6;
                break;
            case '7':
                sum += 7;
                break;
            case '8':
                sum += 8;
                break;
            case '9':
                sum += 9;
                break;
            }
        }
    }
    printf("%d\n", sum);
}
