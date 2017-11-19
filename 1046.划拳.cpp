#include<stdio.h>
int main(){
	int N;
	int	Jhan[100],Jhua[100],Yhan[100],Yhua[100];
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d%d%d%d",&Jhan[i],&Jhua[i],&Yhan[i],&Yhua[i]);
	}
	int m=0,n=0;
	for(int j=0;j<N;j++){
		if(Jhua[j]==Jhan[j]+Yhan[j]&&Yhua[j]!=Jhan[j]+Yhan[j]) n++;
	    if(Yhua[j]==Jhan[j]+Yhan[j]&&Jhua[j]!=Jhan[j]+Yhan[j]) m++;
		if(Jhua[j]==Jhan[j]+Yhan[j]&&Yhua[j]==Jhan[j]+Yhan[j])continue;
		if(Jhua[j]!=Jhan[j]+Yhan[j]&&Yhua[j]!=Jhan[j]+Yhan[j])continue;
	}
	printf("%d %d\n",m,n);
}