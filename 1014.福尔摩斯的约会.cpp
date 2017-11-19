#include<stdio.h>
#include<string.h>
int main(){
	int i,j;
	char s1[60];
	char s2[60];
	char s3[60];
	char s4[60];
	char weeks[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	scanf("%s%s%s%s",s1,s2,s3,s4);
	int len1=strlen(s1);
	int len2=strlen(s2);
	int len3=strlen(s3);
	int len4=strlen(s4);
	int flag=0;
	int length1=len1>len2?len2:len1;
	for(i=0;i<length1;i++){
			if(s1[i]>='A'&&s1[i]<='Z'&&flag==0&&s1[i]==s2[i]){
				printf("%s ",weeks[s1[i]-'A']);
				flag=2;
				i++;
			}
			if(flag==2&&s1[i]==s2[i]){
				if(s1[i]>='0'&&s1[i]<='9'){
					printf("%02d:",s1[i]-'0');
					break;
				}
				if(s1[i]>='A'&&s1[i]<='N'){
					printf("%02d:",s1[i]-'A'+10);
					break;
				}
			}
		
	}
	int length2=len3>len4?len4:len3;
	for(j=0;j<length2;j++){
		if(s3[j]==s4[j]){
			if((s3[j]>='A'&&s3[j]<='Z')||(s3[j]>='a'&&s3[j]<='z')){
				printf("%.2d\n",j);
				break;
			}
		}
	}
	return 0;		
}