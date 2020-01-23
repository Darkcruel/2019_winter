#include<stdio.h>
#include<string.h>

//baekjoon number 8958 solution

int main()
{
    int N;
    scanf("%d",&N);
    char OX[80];
    int score[N];
    
    for(int i=0;i<N;i++)
    {
        int total=0;
        int now = 1;
        
        scanf("%s",&OX);
        for(int j=0;j<strlen(OX);j++)
        {    
                if(OX[j]=='O')
                {
                    total = total+now;
                    now = now+1;
                }
                if(OX[j]=='X')
                {
                    now = 1;
                }   
        }
        score[i] = total;
    }
    for(int i=0;i<N;i++)
    {
        printf("%d\n",score[i]);
    }   
}