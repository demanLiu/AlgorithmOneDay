#include "stdio.h"
#include "prime.h"
int main()
{
    int n;
    int count = 0;
    printf("%s", "please input your numer");
    scanf("%d", &n);
    MACRO_TIME_BEGIN
    for (int i = 0; i < n; i++)
    {
        if (isPrimeV1(i))
        {
            printf("%d\n", i);
            count++;
        }
    }
    MACRO_TIME_END
    printf("%d\n", count);
    count = 0;
    MACRO_TIME_BEGIN
    for (int i = 0; i < n; i++)
    {
        if (isPrimeV2(i))
        {
            printf("%d\n", i);
            count++;
        }
    }
    MACRO_TIME_END
    printf("%d\n", count);
    count = 0;
    MACRO_TIME_BEGIN
    for (int i = 0; i < n; i++)
    {
        if (isPrimeV3(i))
        {
            printf("%d\n", i);
            count++;
        }
    }
    MACRO_TIME_END
    printf("%d\n", count);
    count = 0;
    MACRO_TIME_BEGIN
    int *primeArr = isPrimeV4(n);
    for (int i = 2; i < n; i++)
    {
        if (primeArr[i] == 1)
        {
            printf("%d\n", i);
            count++;
        }
    }
    free(primeArr);
    MACRO_TIME_END
    printf("%d\n", count);
    return 0;
}
