#include<stdio.h>
#include<string.h>

int ck_paellin(char str[]){
	int j = strlen(str)-1;
	for(int i = 0; i<strlen(str);i++){
		if(i>j) break;
		if(str[i] != str[j])
			return 0;
		j--;
	}
	return 1;
}

int main(){
	char input_str[6] = {'1'};

	while(true){
		scanf("%s",input_str);
		if(strcmp(input_str,"0") == 0)
			break;
		if(ck_paellin(input_str))
			printf("yes\n");
		else
			printf("no\n");
	}
}