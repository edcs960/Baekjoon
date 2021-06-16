#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int basket[101] = { 0, }; // 바구니 배열 생성
	int n, m,i,j,k;
	
	scanf("%d %d", &n, &m); // 바구니 개수 및 몇번 공을 넣을지 입력받기

	while (m > 0) {
		scanf("%d %d %d", &i, &j, &k); // i번째 바구니 부터 j번째 바구니까지 k가 적혀있는 공을 넣는다
		for (int a = i-1; a < j; a++) { // 실제로 바구니 배열에 k값을 넣는 코드
			basket[a] = k;
		}
		m--;
	}
	for (int a = 0; a < n; a++) { // n번째 바구니까지 출력
		printf("%d ", basket[a]);
	}
}