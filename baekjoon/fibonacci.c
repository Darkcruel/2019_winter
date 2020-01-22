#include<stdio.h>

//baekjoon number 10870 solution

int fibo(int n);

int main()
{
    int n;
    scanf("%d",&n);
    int result;

    if(n==1||n==2)
    {
        result = 1;
    }
    else
    {
        result = fibo(n-1)+fibo(n-2);
    }

    printf("%d",result);
    return 0;
}

int fibo(int n)
{
    int result;
    if(n<=0)
    {
        result = 0;
    }
    else if(n==1||n==2)
    {
        result = 1;
    }
    else
    {
        result = fibo(n-1)+fibo(n-2);
    }
    return result;
}