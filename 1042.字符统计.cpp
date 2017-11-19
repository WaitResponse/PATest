#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int arr[128]={0},n,max=0;
	char max1;
	while((n=getchar())!='\n'){
		n=tolower(n);
		arr[n]++;	
	}
	int i;
	for(i=97;i<123;i++){
		if(max<arr[i]){//这里是max<arr[i]，不能等于，如果等于则输出字母排序最大的那个字母
			max=arr[i];
			max1=i;
		}
	}
	printf("%c %d\n",max1,max);
	return 0;
}