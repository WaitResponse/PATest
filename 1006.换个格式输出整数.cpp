#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=0,nums[10];
	do{
	nums[i++]=n%10;
		n/=10;
	}while(n!=0);
	int j;
	if(i==3){
		for(j=0;j<nums[2];j++){
			printf("B");
		}
	}
	if(i==3||i==2){
		for(j=0;j<nums[1];j++){
			printf("S");
		}
	}
	for(j=0;j<nums[0];j++){
		printf("%d",j+1);
	}
	printf("\n");
	return 0;
}