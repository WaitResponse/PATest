#include<stdio.h>
#include<string.h>
struct Student{
	char name[15],id[15];
	int  score;
};

int main(){
	int n;
	struct Student student[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %s %d",student[i].name,student[i].id,&student[i].score);
	}

	struct Student max=student[0];
	struct Student min=student[0];
	for(int j=0;j<n;j++){
		if(student[j].score>max.score){
			max=student[j];
		} 
		if(student[j].score<min.score){
			min=student[j];
		}
	}
	printf("%s %s\n",max.name,max.id);
	printf("%s %s\n",min.name,min.id);
	return 0;

}

