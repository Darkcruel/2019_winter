#include<stdio.h>

//baekjoon number 10250 solution

int main() {
    int T, H, W, N;
    scanf("%d", &T);
    while(T--) {
        scanf("%d %d %d", &H, &W, &N);
        N--;
        printf("%d%02d\n", N%H+1, N/H+1);
    }
    return 0;
}