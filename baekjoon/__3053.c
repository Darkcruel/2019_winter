#include<stdio.h>

//baekjoon number 3053 solution

int main()
{
    int N;
    scanf("%d",&N);
    double euclid = 3.14159265358979323846264338327950288*N*N;
    double taxi = 2*N*N;
    printf("%.6f\n",euclid);
    printf("%.6f\n",taxi);
    return 0;
}