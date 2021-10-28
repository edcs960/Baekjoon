#include<stdio.h>

int main(){
	int n;

	scanf("%d",&n);

	if(n==1){printf("*");}
	else{
		for(int i = 0; i<n;i++){
			for(int j = i; j<n-1;j++){printf(" ");}
			if(i==n-1){
				for(int j = 0; j<2*i+1;j++){
					printf("*");
				}
			}else{
				for(int j = 0; j<2*i+1;j++){
					if(i==0){printf("*"); break;}
					else if(j==0 || j == 2*i){printf("*");}
					else{printf(" ");}
				}
			}
			printf("\n");
		}
	}
}