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
	jz[i][j]=num[k++];//k先赋值在自增
	while(k<N){
		while(j+1<col&&!jz[i][j+1]) jz[i][++j]=num[k++];//如果j的下一个位置为0，即j+1没有被赋值过，就把num[k++]赋给j+1,向右
		while(i+1<row&&!jz[i+1][j]) jz[++i][j]=num[k++];//向下
		while(j-1>=0&&!jz[i][j-1])	jz[i][--j]=num[k++];//向左
		while(i-1>=0&&!jz[i-1][j])	jz[--i][j]=num[k++];//向上
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
