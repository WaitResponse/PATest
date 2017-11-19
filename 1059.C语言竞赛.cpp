#include<iostream>
#include<cmath>
using namespace std;
int sushu(int a){
	int m=sqrt(a);
	for(int i=2;i<=m;i++){
		if(a%i==0) return 0;
	}
	return 1;
}
int main(){
	int zj[10010]={0};
	int N,K;
	cin>>N;
	int i,j,num;
	for(i=1;i<=N;i++){
		cin>>num;
		zj[num]=i;
	}
	cin>>K;
	int ser[10010];
	for(j=0;j<K;j++){
		cin>>ser[j];
	}
	for(i=0;i<K;i++){
		if(zj[ser[i]]==-1){
			printf("%04d: Checked\n",ser[i]);
		}
		if(zj[ser[i]]==1){
			printf("%04d: Mystery Award\n",ser[i]);
			zj[ser[i]]=-1;
		}
		else if(sushu(zj[ser[i]])&&zj[ser[i]]!=-1&&zj[ser[i]]!=0){
			printf("%04d: Minion\n",ser[i]);
			zj[ser[i]]=-1;
		}
		else if(zj[ser[i]]!=-1&&zj[ser[i]]!=0){
			printf("%04d: Chocolate\n",ser[i]);
			zj[ser[i]]=-1;
		}
		if(zj[ser[i]]==0){
			printf("%04d: Are you kidding?\n",ser[i]);
		}
	}
	return 0;
}