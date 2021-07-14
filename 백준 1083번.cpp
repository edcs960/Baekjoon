#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
* 버블 소트의 변형 문제
* 
* 1. 첫번째 칸부터 시작합니다.
* 2. 교환횟수한도내에서 오른쪽에서 가장 큰 수를 찾습니다.
* 3. 가장 큰 수를 첫번째칸에 옮겨놓고 나머지를 밀어줍니다.
* (이작업에서 사실 O(N) 작업이 발생하므로 다른 알고리즘을 생각해서 바꿀 수 있습니다.  원소가 사라졌다고 단순 마킹하는 것만으로도 OK)
* 4. 교환횟수를 이동한 숫자만큼 제하고 다음 칸으로 이동후 2번부터 반복합니다.  교환횟수가 0이거나 마지막칸에 도달하면 빠져나옵니다.
* 참고 사이트 : https://sdev.tistory.com/353
* 
* 문제를 보고 버블소트를 이용하는 것을 파악하여 예제출력이 알맞게 나오도록 코딩하였지만 문제의 조건에 맞지 않아 위 사이트를 참고했습니다.
*/

int main() {
	int n, s, max,idx_max,tmp;
	int arr[51];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &s);

	for (int i = 0; i < n; i++) {
		max = arr[i];
		idx_max = i;
		for (int j = i + 1; j < n && j<=i+s; j++) {
				if (max < arr[j]) {
					max = arr[j];
					idx_max = j;
			}
		}
		s -= (idx_max - i);
		while (idx_max > i) {
			arr[idx_max] = arr[idx_max - 1];
			idx_max--;
		}
		arr[i] = max;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}