/*
* �� ������ ���ڿ� �迭�� �ƽ�Ű �ڵ带 �̿��Ͽ� ������ Ǯ�� ���� Ǯ���ִ�.
* ������ ������ strlen�Լ��� ���ڿ� ���̸� �������� �� '\0'���� �����Ͽ� ������ ���̱� ������ s_len���� -1���־���.
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