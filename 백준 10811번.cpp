#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int basket[101]; // 바구니 배열 생성
	int n, m, i, j,tmp;

	scanf("%d %d", &n, &m);

	for (int a = 0; a < n; a++) { basket[a] = a + 1; } // 바구니 배열 초기화

	while (m > 0) { // i,j 을 입력받아 basket의 값을 swap
		scanf("%d %d", &i, &j);
		while (j-1 > i-1) {
			tmp = basket[i-1];
			basket[i-1] = basket[j-1];
			basket[j-1] = tmp;
			i++; j--;
		}
		m--;
	}
	for (int a = 0; a < n; a++) { // n번째 바구니까지 출력
		printf("%d ", basket[a]);
	}
}