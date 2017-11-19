#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int N,i,j;
	cin>>N;
	int a,b;
	double r[10010];
	for(i=0;i<N;i++){
		cin>>a>>b;
		r[i]=(double)sqrt(a*a+b*b);
	}
	double max=0;
	for(j=0;j<N;j++){
		if(r[j]>max) max=r[j];
	}
	printf("%.2lf\n",max);
	return 0;
}