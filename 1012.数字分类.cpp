#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i,temp,x;
	int sum1=0,sum2_1=0,sum2_2=0,sum4=0,count1=0,count2=0,count3=0,count4=0,count5=0,max=0;
	for(i=0;i<n;i++){	
		cin>>temp;
		x=temp%5;
		if(x==0){		
			if(temp%2==0) {sum1+=temp;count1++;}
		}
		if(x==1){
			count2++;
			if(count2%2!=0) sum2_1+=temp;
			else sum2_2+=temp;
		}
		if(x==2){
			count3++;
		}
		if(x==3){
			count4++;
			sum4+=temp;
		}
		if(x==4){
			count5++;
			if(temp>max) max=temp;
		}
	}

	if(count1) cout<<sum1<<" ";								else cout<<"N"<<" ";
	if(count2) cout<<sum2_1-sum2_2<<" ";					else cout<<"N"<<" ";
	if(count3) cout<<count3<<" ";							else cout<<"N"<<" ";
	if(count4&&count4!=1) printf("%.1f ",1.0*sum4/count4);	else cout<<"N"<<" ";
	if(count5) cout<<max<<endl;								else cout<<"N"<<endl;
	return 0;
}
