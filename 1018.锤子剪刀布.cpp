#include<stdio.h>
int main(){
	char A[100000];
	char B[100000];
	int N;

	scanf("%d",&N);
	for(int i=0;i<N;i++){
	scanf(" %c %c",&A[i],&B[i]);//��һ��%cǰ�Ŀո���ʡ�������ǳԵ���һ�����������Ļس���
	}

	int a1=0,a2=0,a3=0;
	int b1=0,b2=0,b3=0;
	int ac=0,aj=0,ab=0;
	int bc=0,bj=0,bb=0;
	for(int j=0;j<N;j++){
	if(A[j]==B[j]) a2++;
	if(A[j]=='C'&&B[j]=='J') {ac++;a1++;}
	if(A[j]=='J'&&B[j]=='C') {bc++;}

	if(A[j]=='J'&&B[j]=='B') {aj++;a1++;}
	if(A[j]=='B'&&B[j]=='J') {bj++;}

	if(A[j]=='B'&&B[j]=='C') {ab++;a1++;}
	if(A[j]=='C'&&B[j]=='B') {bb++;}
	}
	a3=N-a2-a1;//����Ĵ��������ܴ�����ȥƽ�ֵĴ�����Ӯ�Ĵ���
	b1=a3;//��Ӯ�Ĵ������ڼ���Ĵ�����
	b2=a2;
	b3=a1;//����Ĵ������ڼ�Ӯ�Ĵ���
	printf("%d %d %d\n",a1,a2,a3);
	printf("%d %d %d\n",b1,b2,b3);
	if(ab>=ac&&ab>=aj){
		printf("B ");
		}else if(ac>=aj){
		printf("C ");
		}else{
		printf("J ");
		}

	if(bb>=bc&&bb>=bj){
	printf("B\n");
	}else if(bc>=bj){
	printf("C\n");
	}else{
	printf("J\n");
	}
	return 0;
}







