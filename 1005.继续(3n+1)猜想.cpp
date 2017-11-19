#include<stdio.h>
#include<string.h>
	struct Callatz{
		int a;
		int nums[1000];
		int steps;
	};

	 struct Callatz call(struct Callatz callatz, int n){	
		int i=0;
		int step=0;
		while(n!=1){
			n=(n%2?(3*n+1)/2 :n/2);
			callatz.nums[i++]=n;
			step++;
		}
		callatz.steps=step;
		return callatz;
	}

	int main(){
		int n,i,j,k;
		struct Callatz arr[100];
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&arr[i].a);
			arr[i]=call(arr[i],arr[i].a);
		}
		int count;
		for(i=0;i<n;i++){//��һ��ѭ�������������ÿ��Ԫ��
			count=arr[i].steps-1;
			if(arr[i].a==0) continue;
			for(k=0;k<n;k++){//�ڶ������������������˱��������Ԫ��
				if(k==i&&arr[k].a==0) continue;//������ڱ�������������ѭ����������һ��
				for(j=0;j<count;j++){//��������Ƶ�һ��Ԫ����ÿ��Ԫ�ص�Callatz������м�ֵ
					if(arr[i].nums[j]==arr[k].a){
						arr[k].a=0;//����ڶ��������е�Ԫ���ڵ�һ��ÿ��Ԫ�ص�Callatz������м�ֵ�г��ֹ�����ֵΪ0��Ȼ������
						break;
					}				
				}

			}

	}
	
		int nums[100],x=0;
		for(i=0;i<n;i++){//�����ҳ�a��ֵ��Ϊ0��Ԫ��,����һ���µ�����
			if(arr[i].a!=0){
			nums[x++]=arr[i].a;
			} 
		}
		int temp;
		for(j=0;j<x;j++){//�������ð������
			for(k=0;k+j<x-1;k++){
				if(nums[k]<nums[k+1]){
					temp=nums[k+1];
					nums[k+1]=nums[k];
					nums[k]=temp;
				}
			}
		}
		for(i=0;i<x;i++){
			printf("%d",nums[i]);
			if(i!=x-1) printf(" ");
		}
		printf("\n");
		return 0;
	}


