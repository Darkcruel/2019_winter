#include<stdio.h>

//baekjoon number 1546 solution

int main()
{
    int N;
    scanf("%d",&N);
    double max = 0;
    double average = 0;
    double score[N];
    for(int i=0;i<N;i++)
    {
        double exam;
        scanf("%lf",&exam);
        score[i] = exam;
    }

    for(int i=0;i<N;i++)
    {
        if(score[i]>=max)
        {
            max = score[i];
        }
    }

    for(int i=0;i<N;i++)
    {
        average = average+(double)((score[i]/max)*100);
    }

    printf("%.2f",(double)(average/N));
    return 0;
}