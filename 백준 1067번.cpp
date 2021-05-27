#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, res;
	int max = -100000000;
	int x[60000];
	int y[60000];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &y[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			res = 0;
			for (int k = 0; k < n; k++) {
				res += x[(i + k) % n] * y[(j + k) % n];
			}
			if (res > max) max = res;
		}
	}
	printf("%d",max);
}