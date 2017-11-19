#include<stdio.h>
int main(){
	int n,m,i,sum,count=0;
	int friendID[45]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		for(sum = 0; m; m /= 10) sum += m % 10;
		if(!friendID[sum]){
			friendID[sum]=1;//不重复的朋友数ID为1，下标代表这的数的各个位数之和
			count++;
		}
	}
		printf("%d\n",count);
		int t=0;
		for(i = 1;i<45;i++){
			if(friendID[i]){//如果和为1的数存在，打印这个数
			  printf("%d",i);
			  t++;
			  if(t!=count) printf(" ");
			}
			 
		}
		printf("\n");
		return 0;
}