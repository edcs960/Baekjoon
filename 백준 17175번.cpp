#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	long long ck_fibo[51];

	scanf("%d", &n);

	ck_fibo[0] = 1;
	ck_fibo[1] = 1;

	for (int i = 2; i < 51; i++) {
		ck_fibo[i] = ck_fibo[i - 2] + ck_fibo[i - 1] + 1;
	}

	printf("%d", ck_fibo[n] % 1000000007);
}