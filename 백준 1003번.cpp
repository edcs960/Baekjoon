#include<stdio.h>

int dp[41] = {0,1,1};

void fibo(int n){
	for(int i = 3;i<41;i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
}

int main(){
    int T=0,N=0;
    scanf("%d",&T);
	fibo(41);

    while(T>=0){
		printf("%d \n",T);
		scanf("%d",&N);
		if(N==0) printf("1 0\n");
		else if(N==1) printf("0 1\n");
		else printf("%d %d\n",dp[N-1],dp[N]);
		T--;
    }
}