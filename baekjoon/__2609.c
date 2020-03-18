#include<stdio.h>

int gcd(int a,int b)
{
    if(b==0) return a;
    else return gcd(b , a%b);
}

int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    printf("%d\n",gcd(N,M));
    printf("%d",N*M/gcd(N,M));
    return 0;
}