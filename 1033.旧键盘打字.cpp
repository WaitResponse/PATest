#include <stdio.h>
#include <ctype.h>

int main()
{
    int list[128] = {0}, bad_key = 0, input;

    while ((bad_key = getchar()) != '\n') {//��char����int���ͣ��ǽ��ַ���ascii�븳��int 
        list[bad_key] = 1;
        list[tolower(bad_key)] = 1; //�����л�����ֵΪ1���������ĸ����Ӧ�Ĵ�Сд�ַ���Ҫ��ֵΪ1
    }
    if (list['+'] == 1) // ����ϵ���,'+'��asciiֵΪ43����������е�43��Ԫ�ص�ֵΪ1��˵�����������
        for (int i = 65; i < 91; i++){
			list[i] = 1;//����ϵ�������,���д�д��ĸ����ֵΪ1
		}          
	while ((input = getchar()) != '\n'){
        if (list[input] == 0) printf("%c", input); //�����ַ������
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