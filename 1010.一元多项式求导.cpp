
#include<iostream>
using namespace std;
int main(){
	int a[1001],b[1001];
	int i,j;
	for(i=0;;i++){
		cin>>a[i]>>b[i];
		if(b[i]==0) break;//��break�˳�i��ֵΪ�������һ��Ԫ�ص��±꣬����������ĳ���
	}
	for(j=0;j<=i;j++){
		if(a[j]==0||b[j]==0) cout<<"0 0"<<endl;
		else{
			cout<<a[j]*b[j]<<" "<<b[j]-1;
			if(j==i-1){ cout<<endl;break;}//��Ϊ��j==i-1ʱ��ָ���Ѿ�Ϊ0
			else  cout<<" ";
		}
	}
	return 0;
}
