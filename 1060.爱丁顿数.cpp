#include<stdio.h>
int main(){
	int n,i,j,max=0,E,temp,sum=0;
	int days[200000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++,days[temp]++){	//days[temp]�������иù�������� 	
		scanf("%d",&temp);	
		if(temp>max) max=temp;
	}

	for(j=0;j<max;j++){//���й�������0���������
		temp=j;
		sum+=days[j];//���в�����������й�����������ܺ�
			if(n-sum>=temp){//���ڵ�ǰ����������������ȵ�ǰ��������
				E=temp;//������й��������ǰ�������
			}
			else break;
	}
	printf("%d\n",E);
	return 0;
}