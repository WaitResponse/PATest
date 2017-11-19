#include<stdio.h>
int main(){
	int M,N,A,B,t;
	int i,j,ans;
	int res[500][500];
	scanf("%d%d%d%d%d",&M,&N,&A,&B,&t);
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			scanf("%d",&ans);
			if(ans>=A&&ans<=B) res[i][j]=t;
			else res[i][j]=ans;				
		}
	}
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%.3d",res[i][j]);
			if(j!=N-1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}
