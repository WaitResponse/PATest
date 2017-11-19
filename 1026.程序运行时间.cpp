#include<iostream>
using namespace std;
int main(){
	int c1,c2;
	cin>>c1>>c2;
	int t=c2-c1;
	if(t%100>=50){
		t=t/100+1;
	}else{
		t=t/100;
	} 
	int h=t/3600;
	int m=(t%3600)/60;
	int s=t%60;
	printf("%.2d:%.2d:%.2d",h,m,s);
	return 0;
}