#include<iostream>
using namespace std;
int main(){
	int N;
	double e;
	int D;
	cin>>N>>e>>D;
//	scanf("%d%lf%d",&N,&e,&D);
	int i,j;
	int count1,count3=0,count4=0,flag;
	int day;
	double dl;
	for(i=0;i<N;i++){
		scanf("%d",&day);
		flag=0;
		count1=0;
		for(j=0;j<day;j++){
			scanf("%lf",&dl);
			if(dl<e) count1++;
		}
		if(count1>day/2) {count3++;flag=1;}
		if(day>D&&flag==1) {count4++;count3--;}
	}
	double m1=((double)count3/(double)N)*100;
	double m2=((double)count4/(double)N)*100;
	printf("%.1lf%% %.1lf%%",m1,m2);
	return 0;

}
