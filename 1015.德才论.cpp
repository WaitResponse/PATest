#include<iostream>
#include<cstdio>
#include <algorithm>
using namespace std;
struct Student{
	int dScore;
	int cScore;
	int id;
}stu[100000];

bool cmp( Student a,Student b){	
	if(a.cScore+a.dScore==b.cScore+b.dScore){
		if(a.dScore!=b.dScore) return a.dScore>b.dScore	;
		else  return a.id<b.id;
	}
	else return (a.cScore+a.dScore)>(b.cScore+b.dScore);
		 
}

int main(){
	int N,L,H;
	Student stu1[100000],stu2[100000],stu3[100000],stu4[100000];
	scanf("%d%d%d",&N,&L,&H);
//	cin>>N>>L>>H;
	int i;
	int count=0,count1=0,count2=0,count3=0,count4=0;
	for(i=0;i<N;i++){
		scanf("%d%d%d",&stu[i].id,&stu[i].dScore,&stu[i].cScore);
	//	cin>>stu[i].id>>stu[i].dScore>>stu[i].cScore;
		if(stu[i].dScore>=L&&stu[i].cScore>=L){
				count++;
			if(stu[i].dScore>=H&&stu[i].cScore>=H){
				stu1[count1++]=stu[i];
			}else if(stu[i].cScore<H&&stu[i].dScore>=H){
				stu2[count2++]=stu[i];
			}else if(stu[i].cScore<H&&stu[i].dScore<H&&stu[i].dScore>=stu[i].cScore){
				stu3[count3++]=stu[i];
			}else{
				stu4[count4++]=stu[i];
			}
		}						
	}

	sort(stu1,stu1+count1,cmp);
	sort(stu2,stu2+count2,cmp);
	sort(stu3,stu3+count3,cmp);
	sort(stu4,stu4+count4,cmp);

	printf("%d\n",count);
	for(i=0;i<count1;i++){
		printf("%d %d %d\n",stu1[i].id,stu1[i].dScore,stu1[i].cScore);
	   // cout<<stu1[i].id<<" "<<stu1[i].dScore<<" "<<stu1[i].cScore<<endl;
	}
	for(i=0;i<count2;i++){
		printf("%d %d %d\n",stu2[i].id,stu2[i].dScore,stu2[i].cScore);
    //	cout<<stu2[i].id<<" "<<stu2[i].dScore<<" "<<stu2[i].cScore<<endl;
	}
	for(i=0;i<count3;i++){
		printf("%d %d %d\n",stu3[i].id,stu3[i].dScore,stu3[i].cScore);
	//	cout<<stu3[i].id<<" "<<stu3[i].dScore<<" "<<stu3[i].cScore<<endl;
	}
	for(i=0;i<count4;i++){
		printf("%d %d %d\n",stu4[i].id,stu4[i].dScore,stu4[i].cScore);
	//	cout<<stu4[i].id<<" "<<stu4[i].dScore<<" "<<stu4[i].cScore<<endl;
	}		
	return 0;
}