/*
* ���� 9388�� ����
* ���� �ݷʰ� ������.
* pw�迭�� i_pw�迭�� ���̰� �ٸ� �ƹ� ���ڰ� �� �� caps lock �κ� ����� ����. (Wrong pasword�� ���;ߵ�.)
* pw�迭�� a111, i_pw�迭�� A112 �� ���� �Է��� ������ �� caps lock �κ� ����� ����. (Wrong pasword�� ���;ߵ�.)
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

char pw[11];
char i_pw[11];
char t_pw[11];
int caps_pw[11] = {0,};

int ck_n_pw(char a[]) {
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] >= 48 && a[i] <= 57) { return 1; }
	}
	return 0;
}

void strTruncation() {
	int count=0,i=0;
	while (pw[i] != '\0') {
		if (pw[i] >= 65 && pw[i] <= 90) {
			t_pw[count] = pw[i];
			count++;
		}
		else if (pw[i] >= 97 && pw[i] <= 122) {
			t_pw[count] = pw[i];
			count++;
		}
		i++;
	}
}

int ck_num() {
	if (ck_n_pw(pw) && !ck_n_pw(i_pw)) { return 1; }
	return 0;
}

int ck_caps() {
	if (ck_n_pw(pw)) {
		strTruncation();
		for (int i = 0; i < strlen(t_pw); i++) {
			caps_pw[i] = abs(t_pw[i] - i_pw[i]);
		}
		for (int i = 0; i < strlen(t_pw); i++) {
			if (caps_pw[i] != 32) { return 0; }
		}
	}
	else {
		for (int i = 0; i < strlen(pw); i++) {
			caps_pw[i] = abs(pw[i] - i_pw[i]);
		}
		for (int i = 0; i < strlen(pw); i++) {
			if (caps_pw[i] != 32) { return 0; }
		}
	}
	return 1;
}

int main() {
	int n,i=0;
	
	scanf("%d", &n);
	while (n > 0) {
		scanf("%s %s", &pw, &i_pw);
		i++;

		if (strcmp(pw,i_pw) == 0) {
			printf("case %d: Login successful.\n", i);
		}
		else if (ck_num() && ck_caps()) {
			printf("case %d: Wrong password. Please, check your caps lock and num lock keys.\n", i);
		}
		else if (ck_num()) {
			printf("case %d: Wrong password. Please, check your num lock key.\n", i);
		}
		else if(ck_caps()){
			printf("case %d: Wrong password. Please, check your caps lock key.\n", i);
		}
		else{
			printf("case %d: Wrong pasword.\n", i);
		}
		n--;
	}
}