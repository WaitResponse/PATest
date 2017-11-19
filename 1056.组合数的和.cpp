#include<stdio.h>
int main(){
	int N;
	int nums[10];
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&nums[i]);
	}
	int sum=0;
	for(int j=0;j<N;j++){
		for(int k=0;k<N;k++){
			if(k!=j)  sum+=nums[j]*10+nums[k];
		//	else continue;
		}
	}
	printf("%d\n",sum);
}	
