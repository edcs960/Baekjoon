#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(){
	int T;
	int x1,y1,x2,y2;
	int r1,r2,result,p_radius,m_radius;
	double dist;
	int change_type;

	scanf("%d",&T);
	while(T>0){
		scanf("%d %d %d %d %d %d",&x1, &y1, &r1, &x2, &y2, &r2);
		change_type = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
		dist = sqrt((double)change_type);
		p_radius = abs((r1+r2));
		m_radius = abs((r1-r2));
		if(x1 == x2 && y1 == y2 && r1 == r2)
			result = -1;
		else if(p_radius==dist || m_radius==dist)
			result = 1;
		else if (dist==0 ||  p_radius < dist || m_radius > dist)
			result = 0;
		else if (p_radius > dist && m_radius < dist)
			result = 2;
		printf("%d\n",result);
		T--;
	}
	
}