
#include<iostream>
#include<string>
using namespace std;
int main(){
	string pwd;
	int n;
	string pwds[11];
	cin>>pwd>>n;
	getchar();
	int i,j;
	for(i=0;;i++){
		getline(cin,pwds[i]);
		if(pwds[i]=="#") break;
	}
	cout<<pwds[5]<<endl;
	int count=0;
	for(j=0;j<i;j++){
		if(pwds[j]!=pwd){
			count++;
			cout<<"Wrong password: "<<pwds[j]<<endl;
		}else if(count<n){
			cout<<"Welcome in"<<endl;
			break;
		}
		if(count==n){
			 cout<<"Account locked"<<endl;
			 break;
		}
		
	}
	return 0;
}