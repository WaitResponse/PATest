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
	int total=sum-i*2;//需要用到的符号数量
	int surplus=n-total;//剩余的符号数量
	int row=(count-1)*2+1;//可以打印的行数和最外层的符号数

	if (row==1){
		printf("%c\n",m);
	}
	else{
	for(j=0;j<row;j++){
		for(k=0;k<j;k++){//打印空格，每增加一行多打印一个空格
			printf(" ");
		}
		for(i=0;i<row-2*j;i++){//打印符号，每层打印的符号数等于最外层符号数减去2*当前行数
			printf("%c",m);
			
		}
		printf("\n");
		if((row-2*j)==1) break;//当打印的符号数为1，沙漏上半部分打印完成，开始打印下半部分
	}
	int x=(row-3)/2;//下半部分第一行打印的空格数
	int	y=1;
	for(i=0;i<(row-1)/2;i++){
		for(j=0;j<x;j++){
			printf(" ");
		}
		x--;
		//空格数随着层数增加每次减少1
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