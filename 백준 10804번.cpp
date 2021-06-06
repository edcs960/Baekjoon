#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void reverse(int arr[],int x,int y){
	int tmp;
	while(x<=y){
		tmp = *(arr+x-1);
		*(arr+x-1) = *(arr+y-1);
		*(arr+y-1) = tmp;
		x++;
		y--;
	}
}

int main(){
	int arr[20];
	int a,b;

	for(int i = 0;i<20;i++)
		arr[i] = i+1;

	for(int i = 0;i<10;i++){
		scanf("%d %d",&a,&b);
		reverse(arr,a,b);
	}
	for(int i = 0;i<20;i++)
		printf("%d ",arr[i]);
}