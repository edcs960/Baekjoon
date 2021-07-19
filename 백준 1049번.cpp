#define _CRT_SECURE_NO_WARNINGS
#define MIN(a,b)  (((a) < (b)) ? (a):(b))
#include<stdio.h>

int main() {
	int N, M,p_min = 9999, i_min = 9999;
	int brand_p[51];
	int brand_i[51];
	int price_count;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) {
		scanf("%d %d", &brand_p[i], &brand_i[i]);
	}
	
	for (int i = 0; i < M; i++) {
		p_min = MIN(p_min, brand_p[i]);
		i_min = MIN(i_min, brand_i[i]);
	}

	if (N <= 6)
	{
		price_count = MIN(p_min, i_min * N);
	}
	else{
		if (p_min * (N / 6) + i_min * (N % 6) > i_min * N)
			price_count = i_min * N;
		else
			price_count = MIN(p_min * (N / 6 + 1), p_min * (N / 6) + i_min * (N % 6));
	}

	printf("%d", price_count);
}