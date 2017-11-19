
#include<iostream>
using namespace std;
int main(){
	int i,j;
	int nums[10];
	for(i=0;i<10;i++){
		cin>>nums[i];
	}
	
	for(i=0;i<10;i++){
		if(nums[i]!=0&&i!=0){
			cout<<i;
			nums[i]--;
			break;
		}
	}
	for(i=0;i<10;i++){
		for(j=nums[i];j!=0;j--){
			cout<<i;
		}
	}
	return 0;
}
