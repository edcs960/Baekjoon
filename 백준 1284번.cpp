#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int num_length[10] = { 4,2,3,3,3,3,3,3,3,3 };
	int length_count = 2;
	int n;

	while (true) {
		scanf("%d", &n);
		if (n == 0) break;
		length_count = 1;

		while(n != 0){
			length_count += num_length[n % 10];
			length_count++;
			n = n / 10;
		}
		printf("%d\n", length_count);
	}

	
}