#include<stdio.h>
#include<algorithm>
using namespace std;
struct yuebing{
	double total;
	double count;
	double price;
}goods[1000];
int compare( yuebing a, yuebing b){
	return a.price>b.price;
}
int main(){
	int n,i;
	double m;
	scanf("%d %lf",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lf",&goods[i].count);		
	}
	for(i=0;i<n;i++){
		scanf("%lf",&goods[i].total);
		goods[i].price=goods[i].total/goods[i].count;
	}
	double ans=0;
	sort(goods,goods+n,compare);//���۽�������
	for(i=0;i<n;i++){
		if(m<=goods[i].count){//�����һ���±��Ŀ������������������ȫ�����������±����������,�������ȳ��۵�һ���±�
			ans+=m*goods[i].price;
			break;
		}
		else{
			ans+=goods[i].total;
			m-=goods[i].count;
		}
	}
	printf("%.2lf\n",ans);
	return 0;
}