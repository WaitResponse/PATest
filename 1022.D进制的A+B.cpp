//D进制的A+B,即A+B的和 从高位除以d的余数放入一个数组，然后从低位到高位输出
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