#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, M, min = 99999, sum = 0, Nop = 0;
	int arr[102];

	for (int i = 1; i < 102; i++) { // 1 ~ 100���� ������ ����
		arr[i] = i * i;
	}

	scanf("%d", &N);
	scanf("%d", &M);

	for (int i = 1; i < 102; i++) { // �Է¹��� N�� M�� ������ ������ üũ 
		if (arr[i] >= N && arr[i] <= M) {
			if (min > arr[i])
				min = arr[i];
			sum += arr[i];
			Nop = 1; // if�� ������ ���Դ��� üũ�Ͽ� ������ �� sum�� min�� ���, �ȵ������� -1���
		}
	}

	if (Nop) {
		printf("%d\n", sum);
		printf("%d\n", min);
	}
	else {
		printf("-1");
	}
}