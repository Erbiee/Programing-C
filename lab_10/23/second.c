#include "h.h"

void check(int N, struct t ts[])
{
    int k1 = 0;
    int k2 = 0;

    for (int i = 0; i < N; i++)
    {
        if ((ts[i].a == ts[i].b) && (ts[i].a == ts[i].c) && (ts[i].c == ts[i].b))
        {
            k1++;
        }
        else if (ts[i].a * ts[i].a + ts[i].b * ts[i].b == ts[i].c * ts[i].c)
        {
            k2++;
        }
        else if (ts[i].c * ts[i].c + ts[i].b * ts[i].b == ts[i].a * ts[i].a)
        {
            k2++;
        }
        else if (ts[i].a * ts[i].a + ts[i].c * ts[i].c == ts[i].b * ts[i].b)
        {
            k2++;
        }
    }

    printf("Равносторонних: %d\n", k1);
    printf("Прямоугольных: %d\n", k2);
}
