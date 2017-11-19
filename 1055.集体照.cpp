#include<iostream>
#include<algorithm>
//#include<map>
using namespace std;
struct Student{
	string name;
	int height;
}stu[10001];
bool cmp(Student s1,Student s2){
	if(s1.height!=s1.height) return s1.height<s2.height;
	else return (s1.name.compare(s2.name))>0;		
}
int main(){
	int N,K;
	cin>>N>>K;
	int i,j;
	for(i=0;i<N;i++){
		cin>>stu[i].name>>stu[i].name;
	}
	int col=N/K;
	int first;
	int last;
	sort(stu,stu+N,cmp);
	Student temp[10001];
	int middle=(N/K)/2;
	int left,right;
	for(i=0;i<K;i++){
		if(i!=K-1){//除了最后一排
			first=K*col;
			last=K*col+col-1;
			left=0;right=0;flag=0;
			for(j=last;j>=first;j--){
				temp[m]=stu[j];
				if(flag){//falg==表示该排右边
					temp[right++]=stu[j];
					flag=0;
				}else{
					temp[left++]=stu[j];
					flag=1;
				}
			}
		}
	}
}