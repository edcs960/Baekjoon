#include<stdio.h>

int main(){
	int K,N,M, result;
	
	scanf("%d %d %d",&K,&N,&M);

	result = K*N-M;

	if(result < 0)
		result = 0;

	printf("%d",result);
}