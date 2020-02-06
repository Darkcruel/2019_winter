#include<stdio.h>

int main()
{
    int N,M;
    scanf("%d %d\n",&N,&M);
    int num[N];
    int result = 0;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<=N-2;i++)
    {
        for(int j=i+1;j<=N-1;j++)
        {
            for(int k=j+1;k<=N;k++)
            {
                if(num[i]+num[j]+num[k]>=result && num[i]+num[j]+num[k]<=M)
                {
                    result = num[i]+num[j]+num[k];
                }
            }
        }
    }
    printf("%d",result);
    return 0;
}