#include<stdio.h>
#include<math.h>

int ck_count(int i){
	int count = 0;
	while(i != 0){
		i = i / 10;
		count++;
	}
	return count;
}

int main(){
	int A,B,C,D,B_count = 0,D_count = 0;
	long sum;

	scanf("%d %d %d %d", &A,&B,&C,&D);

	B_count = ck_count(B);
	D_count = ck_count(D);

	sum = (A*pow(10.0, B_count) + B) + (C*pow(10.0, D_count)+D);

	printf("%ld", sum);
}