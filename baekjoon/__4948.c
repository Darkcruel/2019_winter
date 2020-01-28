#include<stdio.h>
#include<stdbool.h>

//baekjoon number 4948 solution

bool isprime(int x)
{
    bool result = true;
    if(x==1)
    {
        result = false;
    }
    else if(x==2 || x==3)
    {
        result = true;
    }
    else
    {
        for(int i=2;i*i<=x;i++)
        {
            if(x%i==0)
            {
                result = false;
                break;
            }
        }
    }
    return result;
}

int main()
{
    int N;
    scanf("%d",&N);
    while(N!=0)
    {
        int count = 0;
        for(int i=N+1;i<=2*N;i++)
        {
            if(isprime(i))
            {
                count = count+1;
            }
        }
        printf("%d\n",count);
        scanf("%d",&N);
    }
}