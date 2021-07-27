#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, k, count = 0;
	int arr[10000] = {0,};

	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++) {
		if(n % i == 0)
			arr[count++] = i;
	}
	printf("%d", arr[k - 1]);
}