
#include<iostream>
#include<string>
using namespace std;
struct Studnet{
	string id;
	int a,b;
}stu[1001];
int main(){
	int n;
	cin>>n;
	int i,j;
	for(i=0;i<n;i++){
		cin>>stu[i].id>>stu[i].a>>stu[i].b;
	}
	int m,ser[1001];
	cin>>m;
	for(j=0;j<m;j++){
		cin>>ser[j];	
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(ser[i]==stu[j].a) cout<<stu[j].id<<" "<<stu[j].b<<endl;
		}
	}
	return 0;
}