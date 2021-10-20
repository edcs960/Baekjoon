#include<stdio.h>
#include<math.h>

int main(){
	long long x1,y1,x2,y2,r1,r2;
	long long r_sum, d;

	scanf("%lld %lld %lld",&x1,&y1,&r1);
	scanf("%lld %lld %lld",&x2,&y2,&r2);
	r_sum = r1 + r2;
	d = sqrt((double)((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));

	if(d >= r_sum)
		printf("NO");
	else
		printf("YES");
}