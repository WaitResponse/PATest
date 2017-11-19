#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char a[82];
	int arr[128]={0};
	int n,i=0,j=0;
	while((n=getchar())!='\n'){
		n=tolower(n);
		a[i++]=n;		
		if(arr[n]==0) arr[n]++; //剔除重复的				
		}
	while((n=getchar())!='\n'){
		n=tolower(n);
		if(arr[n]==1) arr[n]++;//如果这个键是好的，则这个键在arr中对应的值为2，坏的则为1
	}

	int len=strlen(a);
//	printf(" %d %d\n",len,i);
	int k;
	for(k=0;k<i;k++){
		if(arr[a[k]]==1){
			if(islower(a[k])){
				printf("%c",a[k]-32);
				arr[a[k]]--;
			}else{
				printf("%c",a[k]);
				arr[a[k]]--;
			}
		}
	}
	printf("\n");
	return 0;
	
}