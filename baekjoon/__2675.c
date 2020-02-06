#include<stdio.h>
#include<string.h>

//baekjoon number 2675 solution

int main()
{
    int TC;
    int N;
    char str[20];
    scanf("%d\n",&TC);    
    for(int i=0;i<TC;i++)
    {
        scanf("%d",&N); 
        scanf("%s", str);
        for(int j=0;j<strlen(str);j++)
        {
            for(int k=j*N;k<(j+1)*N;k++)
            {
                printf("%c",str[j]);
            }
            
        }
        printf("\n");
    }
    
    return 0;
}