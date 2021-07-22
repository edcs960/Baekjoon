#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, M, min = 99999, sum = 0, Nop = 0;
	int arr[102];

	for (int i = 1; i < 102; i++) { // 1 ~ 100까지 제곱수 저장
		arr[i] = i * i;
	}

	scanf("%d", &N);
	scanf("%d", &M);

	for (int i = 1; i < 102; i++) { // 입력받은 N과 M값 사이의 제곱수 체크 
		if (arr[i] >= N && arr[i] <= M) {
			if (min > arr[i])
				min = arr[i];
			sum += arr[i];
			Nop = 1; // if문 안으로 들어왔는지 체크하여 들어왔을 시 sum과 min을 출력, 안들어왔으면 -1출력
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