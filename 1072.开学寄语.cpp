#include<iostream>
#include<string>
using namespace std;
struct Student{
	char name[10];
	int goods[10000];
	bool is_Illegal; 
}stu[1001];

int main(){
	int N,M,wuping[10000]={0};
	cin>>N>>M;
	int i,j,k,t;
	for(i=0;i<M;i++){
		cin>>t;
		wuping[t]=1;
	}
	int count1,count2=0,sum=0,m;
	for(j=0;j<N;j++){
		stu[j].is_Illegal=false;
		m=0;
		cin>>stu[j].name>>count1;
		for(k=0;k<count1;k++){
			cin>>t;
			if(wuping[t]==1){
				sum++;
				stu[j].is_Illegal=true;
				stu[j].goods[m++]=t;
			}
		}
		if(stu[j].is_Illegal){
			count2++;
			cout<<stu[j].name<<":"<<" ";
			for(i=0;i<m;i++){
				cout<<stu[j].goods[i];
				if(i!=m-1) cout<<" ";
				else cout<<endl;
			}
		}
	}
	cout<<count2<<" "<<sum;
	return 0;

} 
