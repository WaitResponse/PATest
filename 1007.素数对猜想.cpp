#include<iostream>
#include<math.h>
using namespace std;
int is_prim(int x){
	int m=sqrt(x);
	int i;//i不能放在循环里面
	for(i=2;i<=m;i++){
		if(x%i==0) break;
	}
	if(i>m) return 1;
   return 0;
}
int main(){
	int n;
	cin>>n;
	int i;
	int bef=2,count=0;
	for(i=2;i<=n;i++){
		if(is_prim(i)&&i-bef==2) count++;
		if(is_prim(i)) bef=i;
	}
	cout<<count<<endl;
	return 0;
}