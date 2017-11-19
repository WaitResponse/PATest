#include<stdio.h>
#include<string.h>
int main(){
	char nums[1000];
	gets(nums);
	char zimu[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int len=strlen(nums);
	int sum=0;
	for(int i=0;i<len;i++){
		sum+=nums[i]-'0';
	}
	int arr[1000],m=0;
	do{
		arr[m++]=sum%10;
		sum/=10;
	}while(sum!=0);
		for(int j=m-1;j>=0;j--){
			printf("%s",zimu[arr[j]]);
			if(j!=0)
			printf(" ");
		}
		return 0;
}
	
