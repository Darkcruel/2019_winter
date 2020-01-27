#include<stdio.h>
#include<stdbool.h>

//baekjoon number 2581 solution

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
    int N,M;
    scanf("%d %d",&M,&N);
    int min = N;
    int sum = 0;
    for(int i=M;i<=N;i++)
    {
        if(isprime(i)==1)
        {
            if(i<=min)
            {
                min = i;
            }
            sum = sum+i;
        }
    }

    if(sum == 0)
    {
        printf("%d",-1);
    }
    else
    {
        printf("%d\n",sum);
        printf("%d\n",min);
    }
    return 0;
    
}