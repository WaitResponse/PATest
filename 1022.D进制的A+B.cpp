//D���Ƶ�A+B,��A+B�ĺ� �Ӹ�λ����d����������һ�����飬Ȼ��ӵ�λ����λ���
#include<stdio.h>
int main(){
	int a,b,d;
	int nums[50];
	scanf("%d%d%d",&a,&b,&d);
	int sum=a+b;
	int i=0;
	do{    
        nums[i++] = sum % d;
        sum /= d;
    } while(sum != 0);

	for(int j=i-1;j>=0;j--){
		printf("%d",nums[j]);	
	}
}