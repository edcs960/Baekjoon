/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char A[51];
	char B[51];
	int min = 9999,  ck;

	scanf("%s %s", &A, &B);
	
	int len_A = strlen(A);
	int len_B = strlen(B);

	for (int i = 0; i <= len_B - len_A; i++) {
		ck = 0;
		for (int j = 0; j < len_A; j++) {
			if (A[j] != B[j+i])
				ck++;
		}
		if (min > ck) {
			min = ck;
		}
	}

	printf("%d", min);
}
*/