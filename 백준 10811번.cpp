#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int basket[101]; // �ٱ��� �迭 ����
	int n, m, i, j,tmp;

	scanf("%d %d", &n, &m);

	for (int a = 0; a < n; a++) { basket[a] = a + 1; } // �ٱ��� �迭 �ʱ�ȭ

	while (m > 0) { // i,j �� �Է¹޾� basket�� ���� swap
		scanf("%d %d", &i, &j);
		while (j-1 > i-1) {
			tmp = basket[i-1];
			basket[i-1] = basket[j-1];
			basket[j-1] = tmp;
			i++; j--;
		}
		m--;
	}
	for (int a = 0; a < n; a++) { // n��° �ٱ��ϱ��� ���
		printf("%d ", basket[a]);
	}
}