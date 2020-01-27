#include<stdio.h>

int num[51];

//baekjoon number 1037 solution

int main()
{
    int TC;
    scanf("%d",&TC);
    
    int input;
    int result;
    int max=2,min=1000000;
    for(int i=0;i<TC;i++)
    {
        scanf("%d",&input);
        num[i] = input;
    }

    for(int i=0;i<TC;i++)
    {
        if(num[i]>=max)
        {
            max = num[i];
        }
        if(num[i]<=min)
        {
            min = num[i];
        }
    }
    result = max*min;
    printf("%d\n",result);
    return 0;
}