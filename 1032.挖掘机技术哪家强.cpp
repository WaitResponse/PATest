#include<stdio.h>
int main(){
	int id, score,N;
	int school[100000]={0};
	int maxScore=0,maxId=0;
	scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d%d",&id,&score);
			school[id]+=score;
			if(school[id]>maxScore){
		    	maxScore=school[id];
				maxId=id;
			} 
		}
	printf("%d %d\n",maxId,maxScore);
	return 0;
}
 

