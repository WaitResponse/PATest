#include<stdio.h>
int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char z[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
int main(){
	int n,flag,count=0,sum,i,j;
	char check[100];
	char nums[100][20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%17s%c",nums[i],&check[i]);
	}
	for(i=0;i<n;i++){
		sum=0;
		flag=0;
		for(j=0;j<17;j++){
			if(nums[i][j]>='0'&&nums[i][j]<='9'){
				sum+=(nums[i][j]-'0')*weight[j];
			}else{
				flag=1;
				break;
			}
		}
		sum=sum%11;
		if(z[sum]!=check[i]||flag==1){
			printf("%s%c\n",nums[i],check[i]);
			count++;
		}
	
	}	
	if(count==0){
		printf("All passed\n");
	}
	return 0;
}