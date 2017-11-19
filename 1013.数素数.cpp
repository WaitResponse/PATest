#include<iostream>
#include<math.h>
using namespace std;
int is_prime(int x){
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0) return 0;//方法里用break在pat会编译错误
	 return 1;
}
int main(){
	int m,n;
	int i=2,count=0,t=0;
	cin>>m>>n;
	while(count<=n){
		if(is_prime(i)){
			count++;
			if(count>=m&&count<=n){
				t++;
				cout<<i;
				if(t%10==0) cout<<endl;
				else if(count!=n) cout<<" ";
			}
		}
		i++;
	}
	return 0;
}