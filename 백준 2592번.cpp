#include<stdio.h>

int main(){
	int arr[10],ck_num[100];
	int sum = 0,max = -10000,p;
	
	for(int i = 0; i<100;i++)
		ck_num[i] = 0;

	for(int i = 0;i<10;i++){
		scanf("%d",&arr[i]);
		ck_num[arr[i]/10]++;
		sum += arr[i];
	}
	for(int i = 0; i<100;i++){
		if(ck_num[i]>max){
			max = ck_num[i];
			p=i;
		}
	}

	printf("%d\n%d",sum/10, p*10);
}