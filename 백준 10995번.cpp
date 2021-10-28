#include<stdio.h>

int main(){
	int n;

	scanf("%d",&n);

	if(n == 1){printf("*");}
	else{
		for(int i = 0; i<n;i++){
			if(i%2 == 0){
				for(int j = 0; j<2*n-1;j++){
					if(j%2==0){printf("*");}
					else if(j%2==1){printf(" ");}
				}
			}
			else if(i%2 == 1){
				for(int j = 0; j<2*n;j++){
					if(j%2==0){printf(" ");}
					else if(j%2==1){printf("*");}
				}
			}
			printf("\n");
		}
	}
}