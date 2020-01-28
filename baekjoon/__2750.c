#include<stdio.h>

//baekjoon number 2750 solution

int main()
{
    int TC;
    scanf("%d\n",&TC);
    int num[TC];
    for(int i=0;i<TC;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<TC;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(num[i]<num[j])
            {
                int temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
    for(int i=0;i<TC;i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}