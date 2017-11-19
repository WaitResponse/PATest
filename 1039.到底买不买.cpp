#include<stdio.h>
int main(){
	int  arr[128]={0};
	int count1=0,count2=0;
	int n;
	while((n=getchar())!='\n'){
		arr[n]++;
		count1++;
	}
	int flag=1;
	int res=0;
	while((n=getchar())!='\n'){
		count2++;
		if(arr[n]==0){
			res++;
			flag=0;
		}
		else{
			arr[n]--;
		}
	}
	if(flag) printf("Yes %d\n",count1-count2);
	else  printf("No %d\n",res);
	return 0;
}
