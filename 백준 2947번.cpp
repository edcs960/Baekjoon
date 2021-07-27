#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ck_arr(int arr[]) {
	int ck_arr[5] = {0,};
	for (int i = 1; i < 6; i++) {
		if (arr[i - 1] == i) {
			ck_arr[i - 1] = 1;
		}
	}
	for (int i = 0; i < 5; i++) {
		if (ck_arr[i] == 0)
			return 1;
	}
	return 0;
}

int main() {
	int arr[5];
	int tmp;

	for (int i = 0; i < 5;i++) {
		scanf("%d", &arr[i]);
	}

	while (ck_arr(arr)) {
		for (int i = 0; i < 4; i++) {
			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
			else {
				continue;
			}
			for (int i = 0; i < 5; i++) {
				printf("%d ", arr[i]);
			}
			printf("\n");
		}
	}
}