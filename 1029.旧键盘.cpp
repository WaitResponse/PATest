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
		if(arr[n]==0) arr[n]++; //�޳��ظ���				
		}
	while((n=getchar())!='\n'){
		n=tolower(n);
		if(arr[n]==1) arr[n]++;//���������Ǻõģ����������arr�ж�Ӧ��ֵΪ2��������Ϊ1
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