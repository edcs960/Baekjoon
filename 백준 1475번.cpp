#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	char str[10];
	int digit[9];
	int max = -999999;

	scanf("%s",str);

	for(int i = 0; i<9;i++) {digit[i] = 0;}
	for(int i = 0;i<strlen(str);i++){
		if(str[i] == '9')
			digit[6]++;
		else
			digit[str[i] - '0']++;
	}

	digit[6] = ceil((double)digit[6]/2);
	for(int i = 0; i<9;i++){
		if(digit[i]>max)
			max = digit[i];
	}
	printf("%d",max);
}

/*
* 기존 코드는 6과 9의 예외를 if문을 통해 다 나눠줬었다.
int ck_digit(int d[]){
	int ck = 0;
	for(int i = 0; i<10;i++){
		if(d[i] > 0)
			ck = 1;
	}
	return ck;
}

int ck_six(char rn[]){
	int ck_six = 0;
	for(int i = 0; i<8;i++){
		if(rn[i] == '6')
			ck_six = 1;
	}
	return ck_six;
}

int ck_nine(char rn[]){
	int ck_nine = 0;
	for(int i = 0; i<8;i++){
		if(rn[i] == '9')
			ck_nine = 1;
	}
	return ck_nine;
}

int main(){
	char Room_Num[8];
	int digit[10];
	int count = 0;

	scanf("%s",Room_Num);

	for(int i = 0; i<10;i++) {digit[i] = 0;}
	for(int i = 0; i<strlen(Room_Num);i++) {digit[Room_Num[i] - '0']++;}
	
	while(ck_digit(digit)){
		for(int i = 0; i<10;i++){
			if(ck_six(Room_Num) == 1 && ck_nine(Room_Num) == 0){
				if(i == 6){
					digit[i] = digit[i] - 2;
					continue;
				}
				digit[i]--;
			}
			else if(ck_six(Room_Num) == 0 && ck_nine(Room_Num) == 1){
				if(i == 9){
					digit[i] = digit[i] - 2;
					continue;
				}
				digit[i]--;
			}
			else if(ck_six(Room_Num) == 1 && ck_nine(Room_Num) == 1){
				if(i==6 || i==9){
					if(digit[6]>0 && digit[9]<=0)
						digit[i] = digit[i] - 2;
					else if(digit[6]<=0 && digit[9]>0)
						digit[i] = digit[i] - 2;
					else
						digit[i]--;
				}
				else{
					digit[i]--;
				}
			}
			else{
				digit[i]--;
			}
		}
		count++;
	}
	printf("%d",count);
}*/