#include<iostream>
#include<algorithm>
using namespace std;
struct Ans{
	int count;//´íÎó´ÎÊý
	int x,y,z;
//	int anss[128];//´ð°¸
}ans[110];

int main(){
	int N,M;
	cin>>N>>M;
	int i,j,k,n,sum=0;
	int anss[1010][128]={0};
	for(i=0;i<M;i++){
		ans[i].count=0;
		sum=0;
	//	ans[i].anss[128]={0};
		scanf("%d%d%d",&ans[i].x,&ans[i].y,&ans[i].z);
		while((n=getchar())!='\n'){
			if(n>='a'&&n<='z') anss[i][n]++;
		}
	}
	int score=0,m,flag;
	int sumScore[1010];
	for(i=0;i<N;i++){
		score=0;sum=0;
		for(j=0;j<M;j++){
			while((n=getchar())!=')'){
				if(n>='a'&&n<='z'){
					if(anss[j][n]==1) flag=1;
					else {flag=0;break;}
				}
		}
			if(flag) score+=ans[j].x;
			else ans[j].count++;
			
	}
		sumScore[i]=score;
}
	for(i=0;i<N;i++){
		cout<<sumScore[i]<<endl;
	}
	int max=0,maxId;
	for(j=0;j<M;j++){
		if(ans[j].count>max){
			max=ans[j].count;
		}
		cout<<ans[j].count<<endl;
	}
	if(max==0) cout<<"Too simple"<<endl;
	else if(max>1){
		for(j=0;j<M;j++){
			if(ans[j].count==max) cout<<max<<" ";
		}
	}

}
