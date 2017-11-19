#include<stdio.h>
#include<math.h>
const int G=17*29;
const int S=29;
int main(){
	int g1,s1,k1,g2,s2,k2;
	int P,A;
	scanf("%d.%d.%d",&g1,&s1,&k1);
	scanf("%d.%d.%d",&g2,&s2,&k2);
	P=g1*17*29+s1*29+k1;//应付的价钱
	A=g2*17*29+s2*29+k2;//实际付的价钱
	int change=A-P;
	if(change<0){
	 printf("-");
	 change=-change;
	}
	printf("%d.%d.%d\n",change/G,(change%G)/S,change%29);
	return 0;
}
	
