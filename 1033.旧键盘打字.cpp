#include <stdio.h>
#include <ctype.h>

int main()
{
    int list[128] = {0}, bad_key = 0, input;

    while ((bad_key = getchar()) != '\n') {//把char赋给int类型，是将字符的ascii码赋给int 
        list[bad_key] = 1;
        list[tolower(bad_key)] = 1; //将所有坏键赋值为1，如果是字母，相应的大小写字符都要赋值为1
    }
    if (list['+'] == 1) // 检查上档键,'+'的ascii值为43，如果数组中第43的元素的值为1，说明这个键坏掉
        for (int i = 65; i < 91; i++){
			list[i] = 1;//如果上档键坏了,所有大写字母都赋值为1
		}          
	while ((input = getchar()) != '\n'){
        if (list[input] == 0) printf("%c", input); //查验字符表并输出
	}
	printf("\n");
    return 0;
}



/*#include<stdio.h>
#include<string.h>
int main(){
	int i,j;
	char s1[100000];
	char s2[100000];
	gets(s1);
	gets(s2);
	int len1=strlen(s1);
	int len2=strlen(s2);
	if(len1==0) printf("%s\n",s2);
	else{	
	int flag=0;
	for(i=0;i<len1;i++){
		if(s1[i]=='+'||s1[i]==','||s1[i]=='-'||s1[i]=='.'){
			flag=1;
			break;
		}		
	}
	printf("%d\n",flag);
	for(i=0;i<len2;i++){
		for(j=0;j<len1;j++){
			if(s2[i]==s1[j]){
				flag=3;
				break;
			}
			else{
			if(flag==1&&s2[i]>=65&&s2[i]<=90){
					flag=3;
					break;
				}
			if(flag!=1&&s2[i]>=97&&s2[i]<=122&&s2[i]-32==s1[j]){
					flag=3;
					break;
				}
			if(flag!=1&&s2[i]>=65&&s2[i]<=90&&s2[i]+32==s1[j]){
					flag=3;
					break;
				}
			}
		}
		if(flag==3) continue;
		else printf("%c",s2[i]);
	}
		printf("\n");
	}

	return 0;
}*/