#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	char a[10001], b[10001];
	long long sum = 0;
	int len1 = 0, len2 = 0;

	scanf("%s %s", &a, &b);

	for (int i = 0; i < 10001; i++) {
		if (a[i] != NULL)
			len1++;
		else
			break;
	}

	for (int i = 0; i < 10001; i++) {
		if (b[i] != NULL)
			len2++;
		else
			break;
	}

	for (int i = 0; i < len1; i++) {
		for (int j = 0; j < len2; j++) {
			sum += ((long long)a[i]-48) * ((long long)b[j]-48);
		}
	}

	printf("%lld", sum);
}