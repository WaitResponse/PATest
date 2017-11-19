
#include<iostream>
using namespace std;
int main(){
	int a[1001],b[1001];
	int i,j;
	for(i=0;;i++){
		cin>>a[i]>>b[i];
		if(b[i]==0) break;//以break退出i的值为数组最后一个元素的下标，而不是数组的长度
	}
	for(j=0;j<=i;j++){
		if(a[j]==0||b[j]==0) cout<<"0 0"<<endl;
		else{
			cout<<a[j]*b[j]<<" "<<b[j]-1;
			if(j==i-1){ cout<<endl;break;}//因为当j==i-1时，指数已经为0
			else  cout<<" ";
		}
	}
	return 0;
}
