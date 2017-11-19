#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int s1[128]={0},n,count=0;
	while((n=cin.get())!='\n'){
		s1[n]++;
		count++;
	}
	int i;
	for(i=0;i<count;i++){
		if(s1['P']!=0){
			cout<<"P";
			s1['P']--;
		}
		if(s1['A']!=0){
			cout<<"A";
			s1['A']--;
		}
		if(s1['T']!=0){
			cout<<"T";
			s1['T']--;
		}
		 if(s1['e']!=0){
			cout<<"e";
			s1['e']--;
		}
		 if(s1['s']!=0){
			cout<<"s";
			s1['s']--;
		}
		 if(s1['t']!=0){
			cout<<"t";
			s1['t']--;
		}
	}
	printf("\n");
	return 0;
}