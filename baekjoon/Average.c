#include<stdio.h>

//baekjoon number 4344 solution

int main()
{
    int TC;
    scanf("%d\n",&TC);
    
    for(int i=0;i<TC;i++)
    {
        int N;
        scanf("%d",&N);
        int total = 0;
        int count = 0;

        int score[N];
        for(int j=0;j<N;j++)
        {
            scanf("%d",&score[j]);
            total = total+score[j];
            
        }
        double avg = (double)(total/N);
        
        for(int j=0;j<N;j++)
        {
            if(score[j]>avg)
            {
                count = count+1;
            }
        }
        double result = (double) count/N * 100;
        printf("%.3f%%\n",result);
    }
    return 0;
}