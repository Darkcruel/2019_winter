#include<stdio.h>

//baekjoon number 1085 solution

int main()
{
    int x,y,w,h;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    int distance[4] = {x,w-x,y,h-y};
    int min = distance[0];
    for(int i=1;i<4;i++)
    {
        if(distance[i]<=min)
        {
            min = distance[i];
        }
    }
    printf("%d",min);
    return 0;
}