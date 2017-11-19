/*#include<stdio.h>
#include<string.h>
int main(){
	char A[1200],Q[1100];
	int B,R;
	scanf("%s",A);
	scanf("%d",&B);
	int len=strlen(A);
	int sum=0;
	int j=0;
	for(int i=0;i<len;i++){
		sum=10*sum+A[i]-'0';
		if(i==0&&sum<B&&len>1){
		}else{
		Q[j++]=sum/B+'0';
		}
		sum=sum%B;
	}	
		R=sum;
		Q[j]='\0';
		printf("%s %d",Q,R);
}*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char A[1001];
	char Q[1001];
	int B,R;
	cin>>A>>B;
	int i,j=0,sum=0;
	for(i=0;i<strlen(A);i++){
		sum=sum*10+(A[i]-'0');
		if(i==0&&sum<B&&strlen(A)>1){}
		else Q[j++]=sum/B+'0';
		sum=sum%B;
	}
	R=sum;
	Q[j]='\0';//加上'\0'表示字符串结束了，否则会乱码
	cout<<Q<<" "<<R<<endl;		
	return 0;
}
