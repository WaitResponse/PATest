

#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
string arr1[13]={"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string arr2[13]={"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int main(){
	int n;
	cin>>n;
	getchar();
	int i,j,k;
	string s[101];
	int num;
	string msg="";
	for(i=0;i<n;i++){
		num=0;
		getline(cin,s[i]);
		if(s[i][0]>='0'&&s[i][0]<='9'){
			num=atoi(s[i].c_str());
			if(num<13) cout<<arr1[num]<<endl;
			else{
				if(num%13==0) cout<<arr2[num/13-1]<<endl;
				else cout<<arr2[num/13-1]<<" "<<arr1[num%13]<<endl;				
			}
		}
		else{
			for(j=0;j<s[i].size();j+=4){
				msg=msg+s[i][j]+s[i][j+1]+s[i][j+2];
				for(k=0;k<13;k++){
					if(msg==arr1[k]) num=num+k;
					if(msg==arr2[k]) num=num+(k+1)*13;
				}
				msg="";
			}
			cout<<num<<endl;
		}		
	}

	return 0;
}
