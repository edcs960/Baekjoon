#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char tmp_filename[51];
	char input_filename[51];
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", &input_filename);
		if (i == 0)
			strcpy(tmp_filename, input_filename);
		else {
			for (int j = 0; j < strlen(input_filename); j++) {
				if (tmp_filename[j] == input_filename[j]) {
					continue;
				}
				else{
					tmp_filename[j] = '?';
				}
			}
		}
	}
	printf("%s", tmp_filename);
}