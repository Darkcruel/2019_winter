#include<stdio.h>

//baekjoon number 1929 solution

int isprime(int x);

int main()
{
    int min,max;
    scanf("%d %d",&min,&max);
    int sift[max-min+1];
    for(int i=0;i<max-min+1;i++)
    {
        if(isprime(min+i))
        {
            sift[i] = min+i;
        }
        else
        {
            sift[i] = 0;
        }
        
    }
    for(int i=0;i<max-min+1;i++)
    {
       if(sift[i]!=0)
       {
           printf("%d\n",sift[i]);
       }
    }
    return 0;
}

int isprime(int x)
{
    int result = 1;
    if(x==1)
    {
        result = 0;
    }
    else if(x==2 || x==3)
    {
        result = 1;
    }
    else
    {
        for(int i=2;i*i<=x;i++)
        {
            if(x%i==0)
            {
                result = 0;
                break;
            }
        }
    }
    return result;
}