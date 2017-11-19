#include<iostream>
using namespace std;
int main(){
	int N,i;
	cin>>N;
	double nums[100000],sum=0;
	for(i=0;i<N;i++){
		cin>>nums[i];
		sum+=(i+1)*nums[i]*(N-i);
	}
	printf("%.2lf\n",sum);
	return 0;
}