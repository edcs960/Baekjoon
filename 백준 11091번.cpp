#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
* 백준 11091번 문제
* 문장을 입력받는 while 부분에서 i가 0일 때 아예 while 부분이 실행되지 않는 상황이 발생하여 i가 0일 때를 배제하였음.
* 이유가 뭔지 잘모르겠음.
*/

int ck_alpa[27];

void ck_arr_init() { // ck_alpa 배열 초기화
	for (int k = 0; k < 26; k++) {
		ck_alpa[k] = 0;
	}
}

int ck() { // ck_alpa 배열에서 안쓴 알파벳이 있는지 확인
	for (int k = 0; k < 26; k++) {
		if (ck_alpa[k] == 0) { // 안쓴 알파벳이 있으면 0 리턴
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	char input_char;

	scanf("%d", &n); // 입력받을 문장수 입력

	for (int i = 0; i <= n; i++) {
		ck_arr_init(); // ck_alpa 배열 초기화
		
		while ((input_char = getchar()) != '\n') { // 문장 입력받기
			if (input_char >= 65 && input_char <= 90) { // 대문자 판별
				ck_alpa[input_char - 'A'] = 1;
			}
			else if(input_char >= 97 && input_char <= 122){ // 소문자 판별
				ck_alpa[input_char - 'a'] = 1;
			}
			else if (input_char == 32 || input_char == 33 || input_char == 34 || input_char == 39 || input_char == 44 || input_char == 46 || input_char == 63) { // 공백 . , ? ! ' " 제외
				continue;
			}
			else { // 숫자 및 다른 특수문자 제외
				continue;
			}
		}
		if(i != 0){
			if (ck()) { // ck() 함수에서 알파벳 사용 유무 체크 후 리턴값에 따라 pangram출력하거나 missing 출력
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