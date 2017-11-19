#include<iostream>
using namespace std;
int main(){
	int N;
	int tid,sid,score,max=0,res;
	int team[10001]={0};
	cin>>N;
	for(int i=0;i<N;i++){
		scanf("%d-%d %d",&tid,&sid,&score);		
		team[tid]+=score;
		if(team[tid]>max){
			max=team[tid];
			res=tid;
		}
	}
		printf("%d %d\n",res,max);
		return 0;
}
	
