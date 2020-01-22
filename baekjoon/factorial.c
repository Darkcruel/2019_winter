#include<stdio.h>

//baekjoon number 10872 solution

int factorial(int x);

int main()
{
    int N;
    scanf("%d",&N);
    int result = 1;
    while(N>0)
    {
        result = result*factorial(N);
        N = N-1;
    }
    printf("%d",result);
    return 0;
}

int factorial(int x)
{
    int result;
    if(x==0)
    {
        result = 1;
    }
    result = x;
    return result;
}