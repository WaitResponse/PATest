#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int i,sum=0;
	for(i=0;i<s.size();i++){
		if(s[i]>='a'&&s[i]<='z'){
			sum+=s[i]-96;
		}
		if(s[i]>='A'&&s[i]<='Z'){
			sum+=s[i]-64;
		}
	}
	int num[100]={0};
	while(sum!=0){
		num[sum%2]++;
		sum/=2;
	}
	cout<<num[0]<<" "<<num[1]<<endl;
	return 0;
}