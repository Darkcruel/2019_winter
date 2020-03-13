#include<stdio.h>

int main()
{
    
    int height[50] = {0,};
    int weight[50] = {0,};

    
    int TC;
    int rank[50];
    scanf("%d",&TC);

    for(int i=0;i<TC;i++)
    {
        scanf("%d %d",&height[i],&weight[i]);
    }
    for(int i=0;i<TC;i++)
    {
        rank[i]= 1;
        for(int j=0;j<TC;j++)
        {
            if((height[i]<height[j])&&(weight[i]<weight[j]))
            {
                rank[i] = rank[i]+1;
            }
        }
        printf("%d ",rank[i]);
    }
}