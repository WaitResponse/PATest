#include<iostream>
#include<string>
using namespace std;
struct Options{
	int full_marks;
	int options;
	int correct_optinos;
	int arr[128];
}options[101];
int main(){
	int N,M;
	cin>>N>>M;
	int i,j,k;
	int t;
	for(i=0;i<M;i++){
		cin>>options[i].full_marks>>options[i].options>>options[i].correct_optinos;
		for(j=0;j<options[i].correct_optinos;j++){
			cin>>t;
			options[i].arr[t]=1;
		} 
	}
	int options_count;
	double sum=0;
	int a,count=0;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			scanf("(%d",&options_count);
			if(options_count>options[j].correct_optinos) continue;
			else{
				for(k=0;k<options_count;k++){
					scanf(" %d",&a);
					if(options[j].arr[a]!=1) break;
					else count++;
				}
				if(count==options[j].correct_optinos) sum+=options[j].full_marks;
				else if(count!=0&&count<options[j].correct_optinos) sum+=(options[j].full_marks)/2*1.0;
			}
			count=0;
			getchar();
		}
		cout<<sum;
	}
	return 0;
}
