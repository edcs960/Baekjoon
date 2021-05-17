#include<stdio.h>

int main(){
	int N;
	int x1,y1,x2,y2;
	int T;
	int x,y,r;
	int count;
	int start_d, end_d, pow_r;

	scanf("%d", &N);
	

	while(N>0)
	{
		count = 0;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		scanf("%d", &T);
		while(T > 0){
			scanf("%d %d %d",&x, &y, &r);
			start_d = (x1 - x) * (x1 - x) + (y1 - y) * (y1 - y);
			end_d = (x2 - x) * (x2 - x) + (y2 - y) * (y2 - y);
			pow_r = r*r;

			if(start_d > pow_r && end_d < pow_r || start_d < pow_r && end_d > pow_r)
				count++;
			T--;
		}
		printf("%d\n",count);
		N--;
	}
}