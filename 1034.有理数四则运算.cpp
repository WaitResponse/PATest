#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a1,b1,c1,a2,b2,c2,a3,b3,c3;
	scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
	c1=a1/b1;c2=a2/b2;
	int x;
//	cout<<(int)-15%10<<endl;
		if(c1>=0&&c2<0)
		c3=(a1*b2+b2*a1)/(b1*b2);
		x=(int)((a1*b2+b2*a1)%(b1*b2));
		a3=abs((a1*b2+b2*a1)/x)-abs((b1*b2)/x);
		b3=abs((b1*b2)/x);
		printf("%d/%d + (%d) = (%d %d/%d)",a1,b1,a2,b2,c3,a3,b3);
		
	
	
}
