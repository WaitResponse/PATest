
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N;
	double p,nums[100001];
	cin>>N>>p;
	int i,j;
	for(i=0;i<N;i++){
		cin>>nums[i];
	}
	sort(nums,nums+N);
	int count=0;
	for(i=0;i<N;i++){
		for(j=i+count;j<N;j++){
			if(nums[j]>nums[i]*p) break;
			if(j-i+1>count) count=j-i+1;
		}
	}
	cout<<count<<endl;
	return 0;
}