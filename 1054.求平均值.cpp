#include<iostream>
#include<cstdlib>//�����ͷ�ļ�������ʡ��
#include<cstdio>
#include<string>
using namespace std;
int main(){
	 char *num[105];
	//string num[105];
    int N,count=0;
    double average=0;
    cin>>N;
    for(int i=0;i<N;i++){
        bool isNumber=true;     //�ж��Ƿ�Ϊ�Ϸ�����
        int point=0;            //����С����ĸ���
        int point_=0;           //����С����֮���λ��
        //num[i] = (char *)malloc(10*sizeof(char)); //����ռ�
		num[i]=new  char[101];//���ַ�ʽ����ռ�,���������string���ά�������ָ��
        cin>>num[i];
	//	scanf("%s",num[i]);
        int len=strlen(num[i]);
        double temp=atof(num[i]);//���ַ���ת�������֣��������ĸ����Ѷ�Ӧ��ASCII��ֵ�Ž�ȥ
        if(temp<-1000||temp>1000)   isNumber=false;//��һ���������Χ����
        for(int j=0;j<len;j++){  //��ÿһ��Ԫ�صĸ����ַ������ж�
            if(point==1) point_++;  //ֻ��һ��С���㣬С��λ��+1
            if(num[i][j]=='-'&&j!=0){//�ڶ�����������Ų����ڵ�һλ
                isNumber=false;
                break;
            }
            if(num[i][j]!='.'){     
                if((num[i][j]<'0'||num[i][j]>'9')&&(num[i][j]!='-')){//�������������ĸ
                    isNumber=false;
                    break;
                }       
            }else {             
                point++;//��С����
            }
            if(point_>2||point>1){//������������С�������һ������С��λ������2
                isNumber=false;
                break;
            }
        }
        if(!isNumber)
            cout<<"ERROR: "<<num[i]<<" is not a legal number"<<endl;
        else {
            count++;//���ֵ�����++
            average+=temp;//�Ϸ����ֵĺ�
        }
    }
    if(count==1)//ֻ��һ���Ϸ�����
        printf("The average of 1 number is %.2lf",average);
    else if(count==0)//û�кϷ�����
        printf("The average of 0 numbers is Undefined");
    else//�������� ������ƽ��ֵ
        printf("The average of %d numbers is %.2lf\n",count,average/count);
    return 0;
}