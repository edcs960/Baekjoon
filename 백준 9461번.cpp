#include<stdio.h>

int main(){
	long long arr[101] = {1,1,1,2,2};
	int T, N;

	for(int i = 5;i<101;i++){
		arr[i] = arr[i-1] + arr[i-5];
	}

	scanf("%d",&T);
	for(int i = 0; i<T;i++){
		scanf("%d",&N);
		printf("%lld\n",arr[N-1]);
	}
}