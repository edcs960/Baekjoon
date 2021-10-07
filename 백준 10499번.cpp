/**/
#include<stdio.h>

int main(){
	int n, t,count = 0, t_sum = 0,sum = 0;
	int t_work[51];

	scanf("%d %d",&n, &t);
	for(int i = 0; i<n;i++){
		scanf("%d", &t_work[i]);
	}

	for(int i = 0;i<n;i++){
		t_sum += t_work[i];
		if(t > t_sum){
			count++;
		}
	}
	printf("%d", count);
}