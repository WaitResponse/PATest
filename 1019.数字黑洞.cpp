/*#include<stdio.h>

int main(int argc,char *argv[])
{
	int n,temp;
	int max,min;
	int i,j;
	int arr[4];
	scanf("%d",&n);
    do
	{
		max=0;
		min=0;
		for(i=0;i<4;i++)
		{
			arr[i]=n%10;//将四位数的每一位倒置放入数组
			n=n/10;
		}
		for(i=1;i<4;i++)//中间两位
			for(j=0;j<4-i;j++)
			{
				if(arr[j]>arr[j+1])//将小的数提前
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		for(i=0;i<4;i++)
			min=min*10+arr[i];
		for(j=3;j>=0;j--)
			max=max*10+arr[j];
		n=max-min;
		printf("%04d - %04d = %04d\n",max,min,n);
	}while(n!=6174&&n!=0);

	return 0;
}*/

#include<iostream>
#include<algorithm>
#include<stdlib.h>
int cmp(int a,int b){
	return a>b;
}
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n%1111==0){
		printf("%.4d - %.4d = %.4d\n",n,n,n-n);	
		return 0;
	}
	int arr1[4]={0};
	int arr2[4]={0};
	int i,j,k,m,a,b;
	for(k=0;;k++){
		i=0;j=0;
		while(n!=0){
			arr1[i++]=n%10;
			arr2[j++]=n%10;
			n/=10;
		}
		a=0;b=0;
		sort(arr1,arr1+4,cmp);
		sort(arr2,arr2+4);
		for(m=0;m<4;m++){
			a=a*10+arr1[m];
			b=b*10+arr2[m];
		}
		printf("%.4d - %.4d = %.4d\n",a,b,a-b);
		n=a-b;
		if(n==6174) break;
	}
	return 0;
}


