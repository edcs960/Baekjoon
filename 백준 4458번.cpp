/*#include<stdio.h>
#include<string.h>

void init(char arr[]){
	for(int i = 0;i<60;i++){
		arr[i] = NULL;
	}
}

int ck_alpa(char str){
	if(str >= 65 && str <=90 )
		return 1;
	else if(str >= 97 && str <=122)
		return 0;
	else
		return -1;
}

int main(){
	int n;
	char str_input[60];

	scanf("%d",&n);
	getchar();
	
	for(int i = 0; i<n;i++){
		printf("i = %d",i);
		init(str_input);
		fgets(str_input,60,stdin);

		for(int j = 0;j<strlen(str_input);j++){
			if(j == 0 && ck_alpa(str_input[j]) == 0){
				str_input[j] = str_input[j] - 32;
			}
			else if(str_input[j] == ' ' && ck_alpa(str_input[j+1]) == 0){
				str_input[j+1] = str_input[j+1] - 32;
			}
		}
		printf("%s",str_input);
	}
}*/

#include<stdio.h>

int main(){
	int n;
	char str_input[40];

	scanf("%d",&n);
	getchar();

	for(int i = 0; i<n;i++){
		fgets(str_input,40,stdin);
		if(str_input[0] >= 97 && str_input[0]<=122)
			str_input[0] = str_input[0] - 32;
		printf("%s",str_input);
	}
}