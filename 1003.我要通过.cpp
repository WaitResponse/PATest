#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	int i,j;
	int res[11];
	char test[100];
	int count_P,count_A,count_T,pos_P,pos_T,flag;
	for(i=0;i<n;i++){
		gets(test);
		count_P=0;count_A=0;count_T=0;pos_P=0;pos_T=0;flag=0;
		for(j=0;j<strlen(test);j++){
			if(test[j]=='P'){
				count_P++;
				pos_P=j;
			}
			if(test[j]=='A'){
				count_A++;
			}
			if(test[j]=='T'){
				count_T++;
				pos_T=j;
			}
		}
		if((count_P+count_A+count_T)!=strlen(test)) flag=1;	

		if(pos_T-pos_P<=1) flag=1;

		if(count_P>1||count_T>1) flag=1;
		//P前面A的数量*T前面A的数量不等于T后面A的数量
		if(pos_P*(pos_T-pos_P-1)!=strlen(test)-pos_T-1) flag=1;
		
		res[i]=flag;
	}
	for(i=0;i<n;i++){
		if(res[i]==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}