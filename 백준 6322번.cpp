#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c,i = 1;

	while(true){
		scanf("%d %d %d",&a,&b,&c);
		if(a == 0 && b == 0 && c == 0)
			break;
		printf("Triangle #%d\n",i);
		if(c == -1)
			printf("c = %.3lf\n",sqrt(double(a*a + b*b)));
		else{
			if(c <= a || c <= b)
				printf("Impossible.\n");
			else if(a == -1)
				printf("a = %.3lf\n",sqrt(double(c*c - b*b)));
			else if(b == -1)
				printf("b = %.3lf\n",sqrt(double(c*c - a*a)));
		}
		i++;
	}
}