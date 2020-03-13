#include<stdio.h>

int main()
{
    int price[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&price[i]);
    }
    int result = 4000;
    for(int i=0;i<3;i++)
    {
        for(int j=3;j<5;j++)
        {
            if(price[i]+price[j]<result)
            {
                result = price[i]+price[j];
            }
        }
    }
    printf("%d\n",result-50);
    return 0;
}