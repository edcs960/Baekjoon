/*#include<stdio.h>

void ck_credit(double *crd, char arr){
	if (arr == 'A') {*crd = 4.0;}
	else if(arr == 'B') {*crd = 3.0;}
	else if(arr == 'C') {*crd = 2.0;}
	else if(arr == 'D') {*crd = 1.0;}
	else {*crd = 0.0;}
}

void ck_pm(double *crd, char arr){
	if(arr == '+') {*crd += 0.3;}
	else if(arr == '-') {*crd -= 0.3;}
}

int main(){
	char input[3];
	double output;

	scanf("%s",&input);

	ck_credit(&output,input[0]);
	ck_pm(&output, input[1]);

	printf("%.1lf",output);
}*/