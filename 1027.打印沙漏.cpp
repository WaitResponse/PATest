#include<stdio.h>
int main(){
	int n,i,j,k;
	char m;
	int sum=1,count=0;
	scanf("%d %c",&n,&m);
	for(i=3;;i+=2){	
		sum+=i*2;
		count++;
	if(sum>n) break;
	}
	int total=sum-i*2;//��Ҫ�õ��ķ�������
	int surplus=n-total;//ʣ��ķ�������
	int row=(count-1)*2+1;//���Դ�ӡ�������������ķ�����

	if (row==1){
		printf("%c\n",m);
	}
	else{
	for(j=0;j<row;j++){
		for(k=0;k<j;k++){//��ӡ�ո�ÿ����һ�ж��ӡһ���ո�
			printf(" ");
		}
		for(i=0;i<row-2*j;i++){//��ӡ���ţ�ÿ���ӡ�ķ���������������������ȥ2*��ǰ����
			printf("%c",m);
			
		}
		printf("\n");
		if((row-2*j)==1) break;//����ӡ�ķ�����Ϊ1��ɳ©�ϰ벿�ִ�ӡ��ɣ���ʼ��ӡ�°벿��
	}
	int x=(row-3)/2;//�°벿�ֵ�һ�д�ӡ�Ŀո���
	int	y=1;
	for(i=0;i<(row-1)/2;i++){
		for(j=0;j<x;j++){
			printf(" ");
		}
		x--;
		//�ո������Ų�������ÿ�μ���1
		y+=2;
		for(k=0;k<y;k++){
			printf("%c",m);
		}
		printf("\n");
		if(y==row) break;	
		}
	}
	printf("%d\n",surplus);
	return 0;
}