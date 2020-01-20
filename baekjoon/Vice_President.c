#include <stdio.h>

//baekjoon number 2775 solution

int main()
{
    int t;
    scanf("%d",&t);
    int sol[t];
    for(int i=0;i<t;i++)
    {
        int dong , ho;

        scanf("%d %d",&dong,&ho);

        int apart[15][15] = {0,};
        
        for(int i=1;i<=14;i++)
        {
            apart[0][i] = i;
            apart[i][1] = 1;
        }
        for(int i=1;i<=dong;i++)
        {
            for(int j=1;j<=ho;j++)
            {
                apart[i][j] = apart[i-1][j]+apart[i][j-1];
            }
        }
        sol[i] = apart[dong][ho];
    }
    for(int i=0;i<t;i++)
    {
        printf("%d\n",sol[i]);
    }
    return 0;
}