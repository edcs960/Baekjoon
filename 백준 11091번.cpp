#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
* ���� 11091�� ����
* ������ �Է¹޴� while �κп��� i�� 0�� �� �ƿ� while �κ��� ������� �ʴ� ��Ȳ�� �߻��Ͽ� i�� 0�� ���� �����Ͽ���.
* ������ ���� �߸𸣰���.
*/

int ck_alpa[27];

void ck_arr_init() { // ck_alpa �迭 �ʱ�ȭ
	for (int k = 0; k < 26; k++) {
		ck_alpa[k] = 0;
	}
}

int ck() { // ck_alpa �迭���� �Ⱦ� ���ĺ��� �ִ��� Ȯ��
	for (int k = 0; k < 26; k++) {
		if (ck_alpa[k] == 0) { // �Ⱦ� ���ĺ��� ������ 0 ����
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	char input_char;

	scanf("%d", &n); // �Է¹��� ����� �Է�

	for (int i = 0; i <= n; i++) {
		ck_arr_init(); // ck_alpa �迭 �ʱ�ȭ
		
		while ((input_char = getchar()) != '\n') { // ���� �Է¹ޱ�
			if (input_char >= 65 && input_char <= 90) { // �빮�� �Ǻ�
				ck_alpa[input_char - 'A'] = 1;
			}
			else if(input_char >= 97 && input_char <= 122){ // �ҹ��� �Ǻ�
				ck_alpa[input_char - 'a'] = 1;
			}
			else if (input_char == 32 || input_char == 33 || input_char == 34 || input_char == 39 || input_char == 44 || input_char == 46 || input_char == 63) { // ���� . , ? ! ' " ����
				continue;
			}
			else { // ���� �� �ٸ� Ư������ ����
				continue;
			}
		}
		if(i != 0){
			if (ck()) { // ck() �Լ����� ���ĺ� ��� ���� üũ �� ���ϰ��� ���� pangram����ϰų� missing ���
				printf("pangram\n");
			}
			else {
				printf("missing ");
				for (int k = 0; k < 26; k++) {
					if (ck_alpa[k] == 0) {
						printf("%c", k + 97);
					}
				}
				printf("\n");
			}
		}
	}
}