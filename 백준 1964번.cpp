#include<stdio.h>

int main(){
	int n;
	long long sum=0;

	scanf("%d",&n);

	for(int i = 1; i<=n;i++){
		if(i == 1)
			sum = 5;
		else
			sum += 2*(i+1)+(i-1);
	}
	printf("%lld",sum % 45678);
}