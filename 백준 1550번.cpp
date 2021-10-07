/*
* 이 문제는 문자열 배열과 아스키 코드를 이용하여 문제를 풀면 쉽게 풀수있다.
* 주의할 점으로 strlen함수로 문자열 길이를 가져왔을 때 '\0'까지 포함하여 가져온 것이기 때문에 s_len값을 -1해주었다.
*/
#include<stdio.h>
#include<string.h>

int main(){
	char input_str[7];
	int sum = 0,s_len = 0, hex = 1;

	scanf("%s",input_str);
	s_len = strlen(input_str);

	while(s_len > 0){
		if(input_str[s_len-1]>=65 && input_str[s_len-1]<=70){
			sum += (input_str[s_len-1] - 'A' + 10) * hex;
			hex = hex*16;
		}else{
			sum += (input_str[s_len-1] - '0') * hex;
			hex = hex*16;
		}
		s_len--;
	}
	printf("%d", sum);
}