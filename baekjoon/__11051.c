#include<stdio.h>

int dp[1001][1001]={-1,};

int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    for(int i=0;i<1001;i++)
    {
        dp[i][0] = 1;
        dp[i][i] = 1;
        dp[i][1] = i;
    }

    for(int i=2;i<=1000;i++)
    {
        for(int j=2;j<=i;j++)
        {
            dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
            dp[i][j] = dp[i][j]%10007;
        }
    }
    
    printf("%d\n",dp[N][K]);
    return 0;
}