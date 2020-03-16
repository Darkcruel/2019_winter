#include<stdio.h>
#include<stdbool.h>

bool isprime(int n)
{
    bool result = true;
    if(n==1)
    {
        result = false;
    }
    else if(n==2||n==3)
    {
        result = true;
    }
    else
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                result = false;
            }
        }
    }
    return result;
}

int main()
{
    int N;
    scanf("%d",&N);
    int i=2;
    while(N!=1)
    {
        if(N%i==0)
        {
            printf("%d\n",i);
            N = N/i;
        }
        else
        {
            i = i+1;
        }
    }
    return 0;
}