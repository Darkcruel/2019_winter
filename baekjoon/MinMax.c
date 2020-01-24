#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//baekjoon number 10818 solution
int main() {

	int N, i;
	int min = 1000001;
	int max = -1000001;
	int target = 0;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {

		scanf("%d", &target);

		if (target < min) {
			min = target;
		}

		if (target > max) {
			max = target;
		}
	}

	printf("%d %d", min, max);

}