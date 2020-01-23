#include<stdio.h>

//baekjoon number 3052 solution

int main()
{
    int candidate[42] = {0};
    for(int i=0;i<10;i++)
    {
        int N;
        scanf("%d",&N);
        int remain = N%42;
        if(candidate[remain]==0)
        {
            candidate[remain] = 1;
        }
    }
    int sum = 0;
    for(int i=0;i<42;i++)
    {
        sum = sum + candidate[i];
    }
    printf("%d\n",sum%42);
    return 0;
}