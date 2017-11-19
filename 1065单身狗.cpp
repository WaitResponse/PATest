#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector<int> v(100000, 0);
	
	int N,M,i,j,k=0;
	cin>>N;
	int a,b;
	for(i=0;i<N;i++){
		cin>>a>>b;
		v[a]=b;
		v[b]=a;
	}
	cin>>M;
	int arr[10010];
	for(j=0;j<M;j++){
		cin>>arr[j];
	}
	int ds[10010],flag;
	for(i=0;i<M;i++){
		flag=0;
		for(j=0;j<M;j++){
			if(v[arr[i]]==arr[j]){flag=1;break;} 
		}
		if(flag==0) ds[k++]=arr[i];
	}
	printf("%d\n",k);
	sort(ds,ds+k);
	for(i=0;i<k;i++){
		printf("%.5d",ds[i]);
		if(i!=k-1)printf(" ");
	}
	return 0;
}

