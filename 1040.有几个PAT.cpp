#include<stdio.h>
#include<string.h>
int main(){
	char pat[100001];
	gets(pat);
	int len=strlen(pat);
	int count_at=0,count_t=0,count_pat=0;
	while(len--){
		if('T'==pat[len]) count_t++;
		else if('A'==pat[len]) count_at+=count_t;
		else{
			count_pat+=count_at;
			if(count_pat>=1000000007) count_pat=count_pat%1000000007;
		}
	}
	printf("%d\n",count_pat);
	return 0;
}