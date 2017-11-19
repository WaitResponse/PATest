#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
	int N,i,j;
	scanf("%d",&N);
	int star[101],middle[101];
	for(i=0;i<N;i++){
		scanf("%d",&star[i]);
	}
	for(i=0;i<N;i++){
		scanf("%d",&middle[i]);	
	}
	for(i=0;i<N-1&&middle[i]<=middle[i+1];i++);
	for(j=i+1;j<N&&middle[j]==star[j];j++);
	if(j==N){
		cout<<"Insertion Sort"<<endl;
		sort(star,star+i+2);
	}else{
		cout<<"Merge Sort"<<endl;  
		int k=1;
		int flag=1;
		while(flag){
		flag=0;
		for(i=0;i<N;i++){
			if(star[i]!=middle[i]) flag=1;
		}
		k=k*2;
		for(i=0;i<N/k;i++) sort(star+i*k,star+(i+1)*k);
		sort(star+N/k*k,star+N);
		}
	}
		
	for(j=0;j<N;j++){
		cout<<star[j];
		if(j!=N-1) cout<<" ";
	}
	return 0;
	

}
