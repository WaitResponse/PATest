#include<iostream>
#include<algorithm>
bool cmp(int a,int b){
	return a>b;
}
using namespace std;
int main(){
	int N;
	cin>>N;
	int i,j,min=N,k;
	int row,col;
	for(i=1;i<=N;i++){
		for(j=1;j<=i;j++){
			if(i*j==N&&i-j<min){ min=(i-j);row=i;col=j;}
		}
	}
	int num[100];
	for(i=0;i<N;i++){
		scanf("%d",&num[i]);
	}
	sort(num,num+N,cmp);
	int jz[100][100]={0};
	i=0;j=0;k=0;
	jz[i][j]=num[k++];//k�ȸ�ֵ������
	while(k<N){
		while(j+1<col&&!jz[i][j+1]) jz[i][++j]=num[k++];//���j����һ��λ��Ϊ0����j+1û�б���ֵ�����Ͱ�num[k++]����j+1,����
		while(i+1<row&&!jz[i+1][j]) jz[++i][j]=num[k++];//����
		while(j-1>=0&&!jz[i][j-1])	jz[i][--j]=num[k++];//����
		while(i-1>=0&&!jz[i-1][j])	jz[--i][j]=num[k++];//����
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(j!=0) printf(" ");
			 printf("%d",jz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
