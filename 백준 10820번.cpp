/*
* ���� 10820�� ����
* EOF���� ���� ����!
* 
* fgets �� scanf, getchar�� ����ϸ� ���ڿ� �Է¿� ���� �˰� �� �κ�.
* 1. scanf("%s", input)���� ������ �Է¹��� �� ������ ������ ������ �������� ���� ����.
*    ex) �Է����� a b �̷��� ������ �� a���� b���� �� 2�� �Է¹޴� ������ Ȯ��.
* 2. fgets(���ڿ�����, ũ��, ���� ����ü ����)���� �Է¹��� �� '\n'�� '\0'�� ũ����� �Ű�� ��ߵ�.
* 3. getchar()�� while�� �������� (input = getchar()) != '\n' �̷������� ��� ������.
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
		for (int i = 0; i < 4; i++) { // check_string �迭 �ʱ�ȭ
			check_string[i] = 0;
		}
		while ((input = getchar()) != '\n') { // ���� �ϳ� �Է¹޾� ck() �Լ����� �ҹ���, �빮��, ����, �������� �Ǻ��� ī��Ʈ ����.
			if (input == EOF) { // �Է����� EOF�� ������ �� ���� while���� ���������� ���� end ���� 1�� �ٲٰ� break
				end = 1;
				break;
			}
			check_string[ck(input)]++;
		}
		if (check_string[0] + check_string[1] + check_string[2] + check_string[3] != 0) // �Է��� ������ ��µǴ� ���� ����
			printf("%d %d %d %d\n", check_string[0], check_string[1], check_string[2], check_string[3]);
		if (end) break; // end�� �̿��� EOF �Ǻ�
		n++;
	}
}