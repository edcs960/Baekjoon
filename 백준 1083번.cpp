#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
* ���� ��Ʈ�� ���� ����
* 
* 1. ù��° ĭ���� �����մϴ�.
* 2. ��ȯȽ���ѵ������� �����ʿ��� ���� ū ���� ã���ϴ�.
* 3. ���� ū ���� ù��°ĭ�� �Űܳ��� �������� �о��ݴϴ�.
* (���۾����� ��� O(N) �۾��� �߻��ϹǷ� �ٸ� �˰����� �����ؼ� �ٲ� �� �ֽ��ϴ�.  ���Ұ� ������ٰ� �ܼ� ��ŷ�ϴ� �͸����ε� OK)
* 4. ��ȯȽ���� �̵��� ���ڸ�ŭ ���ϰ� ���� ĭ���� �̵��� 2������ �ݺ��մϴ�.  ��ȯȽ���� 0�̰ų� ������ĭ�� �����ϸ� �������ɴϴ�.
* ���� ����Ʈ : https://sdev.tistory.com/353
* 
* ������ ���� �����Ʈ�� �̿��ϴ� ���� �ľ��Ͽ� ��������� �˸°� �������� �ڵ��Ͽ����� ������ ���ǿ� ���� �ʾ� �� ����Ʈ�� �����߽��ϴ�.
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