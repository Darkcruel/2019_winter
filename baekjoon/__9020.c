#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isprime(int x)
{
    bool result = true;
    if(x==1)
    {
        result = false;
    }
    else if(x==2||x==3)
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
            }
        }
    }
    
    return result;
}

int main()
{
    int TC;
    int num;
    int distance = 10000;
    scanf("%d\n",&TC);
    for(int i=0;i<TC;i++)
    {
        scanf("%d",&num);
        for(int j=1;j<=num/2;j++)
        {
            if(isprime(j)&&isprime(num-j))
            {
                if(abs(num-j-j)<distance)
                {
                    distance = num-j-j;
                }
            }
        }
        printf("%d %d\n",(num-distance)/2,(num+distance)/2);
        distance = 10000;
    }
    return 0;
}