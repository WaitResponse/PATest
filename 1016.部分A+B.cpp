
#include<stdio.h>
#include<string.h>
int main(){
	char A[100000],B[10000];
	int a,b;
	scanf("%s",A);
	scanf("%d",&a);
	scanf("%s",B);
	scanf("%d",&b);
	int len1=strlen(A);
	int len2=strlen(B);
	int sum1=0,sum2=0;
	for(int i=0;i<len1;i++){
		if((A[i]-'0')==a){
			sum1=10*sum1+a;
		}	
	}
	for(int j=0;j<len2;j++){
	if((B[j]-'0')==b){
		 sum2=10*sum2+b;
		}
	}
	printf("%d",sum1+sum2);
}
