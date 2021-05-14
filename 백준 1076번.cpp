#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char input[3][7];
	char color[10][7] = { {"black"},{"brown"},{"red"},{"orange"},{"yellow"},{"green"},{"blue"},{"violet"},{"grey"},{"white"} };
	long long multi = 1, result;
	int value[3] = {0,};
	int ohm;

	for (int i = 0; i < 3; i++) {
		scanf("%s", &input[i]);
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			if (strcmp(input[i], color[j]) == 0)
				value[i] = j;
		}
	}
	ohm = value[0] * 10 + value[1];

	for (int i = 0; i < value[2]; i++) {
		multi *= 10;
	}

	result = ohm * multi;

	printf("%lld", result);
}