#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char str[102];
	char *p;
	int sum = 0;

	scanf("%s", str);

	p = strtok(str,",");
	while(p != NULL){
		sum += atoi(p);
		p = strtok(NULL,",");
	}
	printf("%d",sum);
}