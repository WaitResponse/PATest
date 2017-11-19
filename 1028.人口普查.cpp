/*
#include<stdio.h> 
#include<string.h> 
struct Person{
	char name[10];
	int year,month,day;
	int date;
}person[100000];

int main(){
	int N,i;
	int max=20140907,min=19140905;
	int count=0;
	char maxName[20],minName[20];
	scanf("%d",&N);
    for(i=0;i<N;i++){
		scanf("%s %d/%d/%d",person[i].name,&person[i].year,&person[i].month,&person[i].day);		
		person[i].date=person[i].year*10000+person[i].month*100+person[i].day;
	} 
	for(i=0;i<N;i++){
		if(person[i].date>20140906||person[i].date<18140906){
			count++;
		}else {
		if(person[i].date<max){
			max=person[i].date;
			strcpy(maxName,person[i].name);
			}
		if(person[i].date>min){
			min=person[i].date;
			strcpy(minName,person[i].name);
			}
		}
	}	
	printf("%d %s %s\n",(N-count),maxName,minName);
	return 0;
}*/
#include<iostream>
using namespace std;
struct Person{
	char name[10];
	int year,month,day;
	int date;
}person[100000];
int main(){
	int N,i;
	int count=0;
//	char maxName[20],minName[20];
	cin>>N;
    for(i=0;i<N;i++){
		scanf("%s %d/%d/%d",person[i].name,&person[i].year,&person[i].month,&person[i].day);		
		person[i].date=person[i].year*10000+person[i].month*100+person[i].day;
	}
	int max=20140907,min=18140905;
	Person older;
	 Person young;
	for(i=0;i<N;i++){
		if(person[i].date>20140906||person[i].date<18140906) count++;
		else{
			if(person[i].date<max){
				max=person[i].date;
				older=person[i];
			}
			if(person[i].date>min){
				min=person[i].date;
				young=person[i];
			}		
		}	
	}
	if(N-count)cout<<N-count<<" "<<older.name<<" "<<young.name<<endl;
	else cout<<0<<endl;
	return 0;
}
