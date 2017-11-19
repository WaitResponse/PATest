#include<iostream>
#include<algorithm>
using namespace std;
int N;
bool cmp(int a,int b){
	return a>b;
}
int main(){	
	int  i,nums[10001];
	double max=0;
	cin>>N;
	for(i=0;i<N;i++){
		scanf("%d",&nums[i]);
	}
	sort(nums,nums+N);//Ä¬ÈÏÉýÐò
	double sum=0;
//	for(i=0;i<N-1;i++) cout<<nums[i]<<" "<<endl;
	for(i=0;i<N-1;i++){
		sum=nums[i]/2.0+nums[i+1]/2.0;
		nums[i+1]=sum;
		if(sum>max) max=sum;
	}
	cout<<(int)max<<endl;
	return 0;
}