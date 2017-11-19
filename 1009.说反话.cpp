#include<iostream>
#include<string>
using namespace std;
int main(){
	char s1[100];
	char s2[100][100];
	gets(s1);
	int i=0,j;
	char *p=strtok(s1," ");
	while(p!=NULL){
		strcpy(s2[i++],p);
		p=strtok(NULL," ");
	}
	for(j=i-1;j>=0;j--){
		printf("%s",s2[j]);
		if(j!=0) printf(" ");
	}
	return 0;
}