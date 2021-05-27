#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int s1, s2, s3;
	int max = -10000000;
	int tmp[3];
	int sum_s[81] = {0,};

	scanf("%d %d %d", &s1, &s2, &s3);

	for (int i = 1; i <= s1; i++) {
		for (int j = 1; j <= s2; j++) {
			for (int k = 1; k <= s3; k++) {
				sum_s[i + j + k]++;
			}
		}
	}

	for (int i = 0; i <= s1 + s2 + s3; i++) {
		if (sum_s[i] > max) {
			max = sum_s[i];
		}
	}

	for (int i = 0; i <= s1 + s2 + s3; i++) {
		if (sum_s[i] == max) {
			printf("%d", i);
			break;
		}
	}
}