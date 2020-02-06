#include<stdio.h>
#include<math.h>

int main()
{
    int N;
    int index = 0;
    scanf("%d",&N);
    int result = 665;
    while(1)
    {
        if(index==N)
        {
            break;
        }
        result++;
        for(int i=0;i<10;i++)
        {
            if(result/(int)pow(10,i)%1000==666)
            {
                index++;
                break;
            }
        }
    }
    printf("%d",result);
        
    return 0;
}