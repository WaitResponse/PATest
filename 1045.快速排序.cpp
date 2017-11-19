#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N;
	cin>>N;
	int i,nums1[100000],nums2[100000];
	for(i=0;i<N;i++){
		cin>>nums1[i];
		nums2[i]=nums1[i];
	}
	sort(nums2,nums2+N);
	int max=0,m=0;
	int res[100000];
	for(i=0;i<N;i++){
		if(nums1[i]>max) max=nums1[i];//这一步是为了验证后面的数要比前面的数大
		if(nums1[i]==nums2[i]&&nums1[i]==max) res[m++]=nums2[i];
	}
	cout<<m<<endl;
	for(i=0;i<m;i++){
		cout<<res[i];
		if(i!=m-1) cout<<" ";
	}
	cout<<endl;
	return 0;
}