#include<stdio.h>
int main(){
	int n,i,j;
	double A[15],B[15],C[15];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf %lf %lf",&A[i],&B[i],&C[i]);
	}
	for(j=0;j<n;j++){
		if(A[j]+B[j]>C[j]) printf("Case #%d: true",j+1);
		else printf("Case #%d: false",j+1);
		printf("\n");
	}
return 0;
}