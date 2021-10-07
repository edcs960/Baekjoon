#include<stdio.h>

int main(){
	int a = 300,b = 60,c = 10, T,ans_a = 0, ans_b = 0, ans_c = 0;
	
	scanf("%d",&T);
	
	if(T % 10 != 0){
		printf("-1");
	}else{
		if(T >= 300){
			ans_a = T/300;
			T = T%300;
		}
		if(T >= 60){
			ans_b = T/60;
			T = T%60;
		}
		ans_c = T/10;

		printf("%d %d %d",ans_a,ans_b,ans_c);
	}
}