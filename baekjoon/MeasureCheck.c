#include<stdio.h>

//baekjoon number 5086 solution

int main()

{
    int x,y;
    scanf("%d %d",&x,&y);
    while(x!=0 || y!=0)
    {
        if(x%y==0)
        {
            printf("%s\n","multiple");
        }
        else if(y%x==0)
        {
            printf("%s\n","factor");
        }
        else
        {
            printf("%s\n","neither");
        }
        scanf("%d %d",&x,&y);
    }
    return 0;
}