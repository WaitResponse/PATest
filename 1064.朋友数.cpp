#include<stdio.h>
int main(){
	int n,m,i,sum,count=0;
	int friendID[45]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		for(sum = 0; m; m /= 10) sum += m % 10;
		if(!friendID[sum]){
			friendID[sum]=1;//���ظ���������IDΪ1���±����������ĸ���λ��֮��
			count++;
		}
	}
		printf("%d\n",count);
		int t=0;
		for(i = 1;i<45;i++){
			if(friendID[i]){//�����Ϊ1�������ڣ���ӡ�����
			  printf("%d",i);
			  t++;
			  if(t!=count) printf(" ");
			}
			 
		}
		printf("\n");
		return 0;
}