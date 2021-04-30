#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int arr[1001];
int arr2[1001];

int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}

int main(){
	int T,N,K,x,y,W;

	scanf("%d",&T);
	while(T>0){
		scanf("%d %d",&N,&K);
		for(int i = 0; i<N;i++){
			scanf("%d",&arr[i]);
			arr2[i] = arr[i];
		}
		for(int j = 0; j<K;j++){
			scanf("%d %d",&x,&y);
			arr[y-1] = max(arr[y-1],arr[x-1]+arr2[y-1]);

		}
		for(int i = 0;i<N;i++)
			printf("%d : %d\n",i,arr[i]);
		scanf("%d",&W);
		printf("%d\n",arr[W-1]);
	}
}