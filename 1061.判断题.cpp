#include<stdio.h>
int main(){
	int stu,count,i,j,sum,t;
	int score[100],answer[100],res[100];
	scanf("%d%d",&stu,&count);
	for(i=0;i<count;i++){
		scanf("%d",&score[i]);
	}
	for(i=0;i<count;i++){
		scanf("%d",&answer[i]);
	}
	for(i=0;i<stu;i++){
		sum=0;
		for(j=0;j<count;j++){
			scanf("%d",&t);
			if(t==answer[j]){
				sum+=score[j];
			}
		}
		res[i]=sum;
	}
	for(i=0;i<stu;i++){
		printf("%d\n",res[i]);
	}
	return 0;
}