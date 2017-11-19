#include<stdio.h>
#include<string.h>
int main(){
	char nums[10000];
	scanf("%s",nums);
	int len=strlen(nums);
	int i;
	int arr[10]={0};
	for(i=0;i<len;i++){		
		arr[nums[i]-'0']++;
	}	
for(i=0;i<10;i++){
	if(arr[i]!=0){
		printf("%d:%d\n",i,arr[i]);
	}
}
return 0;
}