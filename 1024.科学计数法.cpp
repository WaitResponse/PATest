#include<iostream>
using namespace std;
int main(){
	int n,e,t,i;
	char s[100];
	cin>>s;
	if(s[0]=='-') printf("-");
	n=strlen(a)-1;
	e=0;//����ָ��
	t=1;
	while((s[n]!='+')&&(s[n]!='-')){
		e+=t*(s[n]-'0');
		t=t*10;
		n--;
	}//���ѭ����ָ��
	if(s[n]=='-') e=e*-1;
	t=0;
	if(e==0){//ָ��Ϊ0�����
		for(i=1;i<n-1;i++){
			cout<<s[i];
		}
	}
	else{
		for(i=1;i<n-1;i++){
			if(s[i]!='.'){
				cout<<s[i];
				t++;
			}
			if((t-1==e)&&(t!=n-3)) cout<<".";
		}

	}

}