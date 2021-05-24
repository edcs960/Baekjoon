#include<stdio.h>
#include<stdlib.h>

void quick_sort(int *list, int start, int end){
	if(start >= end){
		return;
	}

	int pivot = start;
	int i = pivot + 1;
	int j = end;
	int tmp;

	while(i<=j){
		while(i<=end && list[i] <= list[pivot]){
			i++;
		}
		while(j> start && list[j] >= list[pivot]){
			j--;
		}

		if(i>j){
			tmp = list[j];
			list[j] = list[pivot];
			list[pivot] = tmp;
		}else{
			tmp = list[i];
			list[i] = list[j];
			list[j] = tmp;
		}
	}

	quick_sort(list, start, j-1);
	quick_sort(list, j+1, end);
}

int main(){
	int n, result;
	int *divisor;

	scanf("%d",&n);

	divisor = (int *)malloc(sizeof(int) * n);

	for(int i = 0;i<n;i++){
		scanf("%d",&divisor[i]);
	}

	quick_sort(divisor,0,n-1);

	result = divisor[0] * divisor[n-1];

	printf("%d", result);
}
