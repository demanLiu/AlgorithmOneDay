#include "prime.h"
#include "string.h"
bool isPrimeV1(int a)
{
    if (a <= 1)
    {
        return false;
    }
    if (a <= 2)
    {
        return true;
    }
    int i = 2;
    while (a % i != 0 && i < a)
    {
        i++;
    }
    return i == a;
}

bool isPrimeV2(int a)
{
    if (a <= 1)
    {
        return false;
    }
    if (a <= 2)
    {
        return true;
    }
    int i = 2;
    int max = (int)sqrt((double)a) + 1;
    while (i < max)
    {
        if (a % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

bool isPrimeV3(int a)
{
    if (a < 2)
    {
        return false;
    }
    if (a == 2 || a == 3 || a == 5)
    {
        return true;
    }
    //6n+1  6n+5
    if (a % 6 != 1 && a % 6 != 5)
    {
        return false;
    }
    int i = 2;
    int max = (int)sqrt((double)a) + 1;
    while (i < max)
    {
        if (a % i == 0)
        {
            return false;
        }
        i++;
    }

    return true;
}

int *isPrimeV4(int a)
{
    int n = a + 1;
    int *primeArr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        primeArr[i] = 1;
    }
    for (int i = 2; i < n; i++)
    {
        if (primeArr[i] == 0)
        {
            continue;
        }
        for (int j = 2; i * j < n; j++)
        {
            primeArr[i * j] = 0;
        }
    }
    return primeArr;
}

int *isPrimeV5(int a)
{
    int n = a + 1;
    int *primeArr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        primeArr[i] = 1;
    }
    for (int i = 2; i < n; i++)
    {
        if (primeArr[i] == 0)
        {
            continue;
        }
        //从i的平方开始标记即可，不需要从2*i, 因为i*i 之前的数会被i小的素数标记
        // eg n=100 i= 5     5*5  之前的是 5*4 (2* 10标记)  5*3 (3标记) 5*2 (2标记)
        for (int j = i * i; j < n; j += i)
        {
            primeArr[j] = 0;
        }
    }
    return primeArr;
}