#include<stdio.h>
int main(){
	int n,i,j,max=0,E,temp,sum=0;
	int days[200000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++,days[temp]++){	//days[temp]代表骑行该公里的天数 	
		scanf("%d",&temp);	
		if(temp>max) max=temp;
	}

	for(j=0;j<max;j++){//骑行公里数从0遍历到最大
		temp=j;
		sum+=days[j];//骑行不超过最大骑行公里的天数的总和
			if(n-sum>=temp){//大于当前公里数的天数如果比当前公里数大
				E=temp;//这个骑行公里数就是爱丁顿数
			}
			else break;
	}
	printf("%d\n",E);
	return 0;
}