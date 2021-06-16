#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int input_a[11];
	int input_b[11];
	int count_a = 0, count_b = 0;

	for (int i = 0; i < 10; i++) { scanf("%d", &input_a[i]); }
	for (int i = 0; i < 10; i++) { scanf("%d", &input_b[i]); }

	for (int i = 0; i < 10; i++) {
		if (input_a[i] > input_b[i]) { count_a++; }
		else if (input_a[i] < input_b[i]) { count_b++; }
	}
	printf("%d %d", count_a, count_b);
	if (count_a > count_b) { printf("A"); }
	else if (count_a < count_b) { printf("B"); }
	else { printf("D"); }
}