#include<stdio.h>
#include<string.h>

int main(){
	char str[257];
	int count;

	while(true){
		count = 0;
		fgets(str,257,stdin);
		if(str[0] == '#'){
			break;
		}
		else{
			for(int i = 0; i<strlen(str);i++){
				if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
					count++;
			}
		}
		printf("%d\n",count);
	}
}