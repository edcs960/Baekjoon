#include<stdio.h>
#include<string.h>

int ck_alpa(char str){
	if(str>=65 && str<=90)
		return 1;
	else if(str>=97 && str<=122)
		return 2;
	else
		return 3;
}

int main(){
	char str[101];
	int crpto = 13;

	fgets(str,101,stdin);

	for(int i = 0; i<strlen(str);i++){
		switch (ck_alpa(str[i])){
			case 1:
				if(str[i] + crpto > 90)
					str[i] = 'A' + (str[i] + crpto - 'Z' - 1);
				else
					str[i] = str[i] + crpto;
				break;
			case 2:
				if(str[i] + crpto > 122)
					str[i] = 'a' + (str[i] + crpto - 'z' - 1);
				else
					str[i] = str[i] + crpto;
				break;
			case 3:
				break;
		}
	}
	printf("%s",str);
}