#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int basket[101] = { 0, }; // �ٱ��� �迭 ����
	int n, m,i,j,k;
	
	scanf("%d %d", &n, &m); // �ٱ��� ���� �� ��� ���� ������ �Է¹ޱ�

	while (m > 0) {
		scanf("%d %d %d", &i, &j, &k); // i��° �ٱ��� ���� j��° �ٱ��ϱ��� k�� �����ִ� ���� �ִ´�
		for (int a = i-1; a < j; a++) { // ������ �ٱ��� �迭�� k���� �ִ� �ڵ�
			basket[a] = k;
		}
		m--;
	}
	for (int a = 0; a < n; a++) { // n��° �ٱ��ϱ��� ���
		printf("%d ", basket[a]);
	}
}