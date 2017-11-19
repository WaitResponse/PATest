#include<stdio.h>
int main(){
	int N,M,score[101]={0},i,ans;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&ans);
		score[ans]++;
	}
	scanf("%d",&M);
	int ser[100000];
	for(i=0;i<M;i++){
		scanf("%d",&ser[i]);
	}
	for(i=0;i<M;i++){
		printf("%d",score[ser[i]]);
		if(i!=M-1) printf(" ");
	}
	printf("\n");
	return 0;
}