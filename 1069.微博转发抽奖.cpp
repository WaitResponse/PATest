#include<iostream>
#include<string>
#include<map>
using namespace std;
map<string,int>wb;
int main(){
	int m,n,s;
	int i,j;
	string str[1001];
	cin>>m>>n>>s;
	for(i=1;i<=m;i++){
		cin>>str[i];
		wb[str[i]]=0;
	}
	if(s>m){
		cout<<"Keep going..."<<endl;
		return 0;
	}
	int flag=0;
	for(j=s;j<=m;){		
		if(wb[str[j]]==0){
			wb[str[j]]=1;
			cout<<str[j]<<endl;
			j=j+n;
		}
		else j=j+1;
	}
	return 0;
}