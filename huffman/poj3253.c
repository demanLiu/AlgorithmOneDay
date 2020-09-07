#include "stdio.h"
#define N 3
#define SWAP(a, b) \
    {              \
        a = a + b; \
        b = a - b; \
        a = a - b; \
    }
int main(int argc, char const *argv[])
{
    int L[N] = {8, 8, 5};
    int ans = 0;
    int T = N;
    while (T > 1)
    {
        int mii1 = 0, mii2 = 1;
        if (L[mii1] > L[mii2])
            SWAP(mii1, mii2);
        for (int i = 2; i < T; i++)
        {
            if (L[i] < L[mii1])
            {
                mii2 = mii1;
                mii1 = i;
            }
            else if (L[i] < L[mii2])
            {
                mii2 = i;
            }
        }
        int t = L[mii1] + L[mii2];
        printf("%d\n", t);
        ans += t;
        L[mii1] = t;
        L[mii2] = L[T - 1];
        T--;
    }
    printf("%d", ans);
}