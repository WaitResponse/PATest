#include<iostream>
using namespace std;
int zj(int  m,int n){
	if(m%n==0)return n;  //return 1表示是最简分数    
    else return zj(n, m%n);
}
int main(){
	int x1,y1,x2,y2,k;
	scanf("%d/%d",&x1,&y1);
	scanf("%d/%d",&x2,&y2);
	cin>>k;
	double min=(double)x1/(double)y1;
	double max=(double)x2/(double)y2;
	int num[1000];
	int i,j=0;
	for(i=0;(double)i/(double)k<max;i++){
		if(((double)i/(double)k)>min&&zj(i,k)==1) num[j++]=i;
	}
	for(i=0;i<j;i++){
		printf("%d/%d",num[i],k);
		if(i!=j-1)printf(" ");
	}
	return 0;
}