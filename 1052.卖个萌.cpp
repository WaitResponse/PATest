#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
char arr1[12][6],arr2[12][6],arr3[12][6];
int main(){
	char n;
	int m;
	int i1=0,i2=0,i3=0,j=0,k;
	int flag=0;
	while((n=getchar())!='\n'){
		if(n=='['&&flag==0) {i1++;j=0;flag=1;}
		if(n==']')flag=0;
		if(n!='['&&n!=' '&&flag) {arr1[i1][j++]=n;}
	}
	flag=0;
	while((n=getchar())!='\n'){
		if(n=='['&&flag==0) {i2++;j=0;flag=1;}
		if(n==']')flag=0;
		if(n!='['&&n!=' '&&flag) {arr2[i2][j++]=n;}
	}
	flag=0;
	while((n=getchar())!='\n'){
		if(n=='['&&flag==0) {i3++;j=0;flag=1;}
		if(n==']')flag=0;
		if(n!='['&&n!=' '&&flag) {arr3[i3][j++]=n;}
	}
	int a1,a2,a3,a4,a5;
	scanf("%d",&m);
	for(k=0;k<m;k++){
		scanf(" %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5);
		if(a1>i1||a2>i2||a3>i3||a4>i2||a5>i1) {
			cout<<"Are you kidding me? @\\/@"<< endl;
		}else if(a1<1||a2<1||a3<1||a4<1||a5<1){
			cout<<"Are you kidding me? @\\/@"<< endl;
		}else{
			printf("%s(%s%s%s)%s\n",arr1[a1],arr2[a2],arr3[a3],arr2[a4],arr1[a5]);
		}	
	}
	return 0;
}
