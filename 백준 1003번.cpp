#include<stdio.h>

int main(){
    int T=0,N=0;
	int dp[41] = {0,1,1};

    scanf("%d",&T);

	for(int i = 3;i<41;i++){
		dp[i] = dp[i-1] + dp[i-2];
	}

    while(T>0){
		scanf("%d",&N);
		if(N==0) printf("1 0\n");
		else if(N==1) printf("0 1\n");
		else printf("%d %d\n",dp[N-1],dp[N]);
		T--;
    }
}