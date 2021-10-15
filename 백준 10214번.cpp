#include<stdio.h>

int main(){
	int T,Y,K;
	int sum_Y = 0, sum_K = 0;

	scanf("%d",&T);
	for(int i = 0; i<T;i++){
		for(int j = 0;j<9;j++){
			scanf("%d %d",&Y,&K);
			sum_Y += Y;
			sum_K += K;
		}
		if(sum_Y == sum_K){printf("Draw\n");}
		else if(sum_Y > sum_K){printf("Yonsei\n");}
		else{printf("Korea\n");}
	}
}