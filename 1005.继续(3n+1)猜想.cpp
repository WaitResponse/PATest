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
		for(i=0;i<n;i++){//第一层循环控制数组里的每个元素
			count=arr[i].steps-1;
			if(arr[i].a==0) continue;
			for(k=0;k<n;k++){//第二层数组控制数组里除了本身以外的元素
				if(k==i&&arr[k].a==0) continue;//如果等于本身，则跳过本轮循环，进行下一轮
				for(j=0;j<count;j++){//第三层控制第一层元素中每个元素的Callatz数组的中间值
					if(arr[i].nums[j]==arr[k].a){
						arr[k].a=0;//如果第二层数组中的元素在第一层每个元素的Callatz数组的中间值中出现过，则赋值为0，然后跳出
						break;
					}				
				}

			}

	}
	
		int nums[100],x=0;
		for(i=0;i<n;i++){//这里找出a的值不为0的元素,放入一个新的数组
			if(arr[i].a!=0){
			nums[x++]=arr[i].a;
			} 
		}
		int temp;
		for(j=0;j<x;j++){//这里进行冒泡排序
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


