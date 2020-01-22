#include<stdio.h>

//baekjoon number 1978 solution

int main()
{
    int N;
    scanf("%d",&N);
    int count = 0;

    for(int i=0;i<N;i++)
    {
        int T;
        scanf("%d",&T);
        if(T==1)
        {
            count = count;
        }
        else if(T==2||T==3)
        {
            count = count+1;
        }
        else
        {
            count = count+1;
            for(int j=2;j*j<=T;j++)
            {
                if(T%j==0)
                {
                    count = count-1;
                    break;
                } 
            }
        }
    }
    printf("%d\n",count);
    return 0;
}