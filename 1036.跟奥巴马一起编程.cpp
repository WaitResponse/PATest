#include<stdio.h>
int main(){
	int N,row;
	char C;
	scanf("%d %c",&N,&C);
	if(N%2==0) row=N/2;
	else row=N/2+1;
	for(int i=0;i<row;i++){
		for(int j=0;j<N;j++){
			if(i==0||i==row-1) printf("%c",C);
			else if(j==0||j==N-1) printf("%c",C);
				else printf(" ");
		}
		printf("\n");
}
	return 0;

}