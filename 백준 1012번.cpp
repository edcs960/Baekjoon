#include<stdio.h>

void init(int F[][51],int ck_F[][51]){
	for(int i = 0; i<51;i++){
		for(int j = 0; j<51;j++){
			F[i][j] = 0;
			ck_F[i][j] = 0;
		}
	}
}

int worm(int F[][51],int ck_F[][51],int width,int height,int max_width,int max_height){
	if(width < 0 || height < 0 || width > max_width || height > max_height )
		return 0;
	if(F[height][width] == 0 || ck_F[height][width] == 1)
		return 0;
	ck_F[height][width] = 1;
	worm(F,ck_F,width-1,height,max_width,max_height);
	worm(F,ck_F,width,height+1,max_width,max_height);
	worm(F,ck_F,width+1,height,max_width,max_height);
	worm(F,ck_F,width,height-1,max_width,max_height);
	return 1;
}

int main(){
	int Field[51][51];
	int ck_Field[51][51];
	int T,max_width,max_height,k,width,height,count;

	scanf("%d",&T);
	for(int i = 0; i<T;i++){
		init(Field,ck_Field);
		count = 0;
		scanf("%d %d %d",&max_width,&max_height,&k); // m : 가로, n : 세로
		for(int j = 0; j<k;j++){
			scanf("%d %d",&width,&height);
			Field[height][width] = 1;
		}
		for(int a = 0; a<max_height;a++){
			for(int b = 0; b<max_width;b++){
				count+=worm(Field,ck_Field,b,a,max_width,max_height);
			}
		}
		printf("%d\n",count);
	}
}