#include<stdio.h>

//baekjoon number 2577 solution

int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int result = A*B*C;
    int count[10] = {0};
    int remain = result%10;
    int share = result/10;
    while(share!=0)
    {
        for(int i=0;i<10;i++)
        {
            if(remain==i)
            {
                count[i] = count[i]+1;
                break;
            }
        }
        remain = share%10;
        share = share/10;
    }
    count[remain] = count[remain]+1;
    for(int i=0;i<10;i++)
    {
        printf("%d\n",count[i]);
    }
    return 0;
}