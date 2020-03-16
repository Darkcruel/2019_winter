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
    int N,M;
    int gcd = 1;
    int lcm = 1;
    scanf("%d %d",&N,&M);
    int i=2;
    int j=2;
    while(i<N && i<M)
    {
        if(N%i==0&&M%i==0)
        {
            gcd = i;
        }
        i = i+1;
    }
    printf("%d\n",i);
}