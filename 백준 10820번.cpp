/*
* 백준 10820번 문제
* EOF관련 구현 문제!
* 
* fgets 및 scanf, getchar을 사용하며 문자열 입력에 관해 알게 된 부분.
* 1. scanf("%s", input)으로 문장을 입력받을 때 공백이 들어오면 공백을 기준으로 나눠 버림.
*    ex) 입력으로 a b 이렇게 들어왔을 시 a따로 b따로 총 2번 입력받는 것으로 확인.
* 2. fgets(문자열변수, 크기, 파일 구조체 변수)으로 입력받을 때 '\n'과 '\0'의 크기까지 신경써 줘야됨.
* 3. getchar()는 while문 조건으로 (input = getchar()) != '\n' 이런식으로 사용 가능함.
*/

#include<stdio.h>
#include<string.h>

int ck(char para) {
	if (para >= 97 && para <= 122) { return 0; }
	else if (para >= 65 && para <= 90) { return 1; }
	else if (para >= 48 && para <= 57) { return 2; }
	else if (para == 32) { return 3; }
}

int main() {
	char input;
	int check_string[4],n = 0, end = 0;

	while(n < 100){
		for (int i = 0; i < 4; i++) { // check_string 배열 초기화
			check_string[i] = 0;
		}
		while ((input = getchar()) != '\n') { // 문자 하나 입력받아 ck() 함수에서 소문자, 대문자, 숫자, 공백인지 판별후 카운트 세기.
			if (input == EOF) { // 입력으로 EOF가 들어왔을 때 밖의 while문을 빠져나가기 위해 end 값을 1로 바꾸고 break
				end = 1;
				break;
			}
			check_string[ck(input)]++;
		}
		if (check_string[0] + check_string[1] + check_string[2] + check_string[3] != 0) // 입력이 없을때 출력되는 것을 막음
			printf("%d %d %d %d\n", check_string[0], check_string[1], check_string[2], check_string[3]);
		if (end) break; // end를 이용해 EOF 판별
		n++;
	}
}