#include "h.h"

int main()
{
    struct t ts[] = {
        {1, 2, 3},
        {2, 2, 2},
        {3, 4, 5},
        {6, 8, 10},
        {5, 5, 5}};

    int N = sizeof(ts) / 12;
    check(N, ts);
}
