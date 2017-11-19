

#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int i,j,k,nums[101];
	for(i=0;i<n;i++){
		cin>>nums[i];
	}
	m=(m<=n)?m :abs(n-m);
	for(j=n-m;j<n;j++){
		cout<<nums[j];
		if(n!=m) cout<<" ";
		else if(n==m&&j!=n-1) cout<<" ";
	}
	for(k=0;k<n-m;k++){
		cout<<nums[k];
		if(k!=n-m-1)cout<<" ";
	}
	return 0;
}
