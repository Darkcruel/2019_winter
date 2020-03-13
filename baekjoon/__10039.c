#include<stdio.h>

int main()
{
    int score[5];
    int result = 0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&score[i]);
        if(score[i]<40)
        {
            score[i] = 40;
        }
    }
    for(int i=0;i<5;i++)
    {
        result = result+score[i];
    }
    printf("%d\n",result/5);
}