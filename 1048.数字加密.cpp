
/*#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string A,tB;
    cin>>A>>tB;
    int len1=A.size();
    int len2=tB.size();
    int max=len1>len2?len1:len2;
    char C[max];
    string B="";
    if(len1>len2){  //���A��B�����������򲹼���0
        for(int i=0;i<len1-len2;i++)
            B+='0';
    }
    B+=tB;//�������
    for(int i=B.size()-1,j=A.size()-1;i>=0&&j>=0;i--,j--){
        if((B.size()-i)%2==0){                  //���ұ��������ż��λ
            if(B[i]-A[j]<0){//B�����ּ�ȥA������Ҳ�����ַ����
                    C[i]=(B[i]-A[j])+10+'0';//�ж����Ƿ�С��0֮��ת�����ַ�
            }else{
                C[i]=B[i]-A[j]+'0';//����0��ֱ��ת�����ַ�
            }
        }else{  //���������λ
            if((B[i]-'0'+A[j]-'0')%13==10)//�Ƚ���Ӧλת���������ٶ�13ȡ��
            C[i]='J';   
            else if((B[i]-'0'+A[j]-'0')%13==11)
            C[i]='Q';   
            else if((B[i]-'0'+A[j]-'0')%13==12)
            C[i]='K';
            else {
                C[i]=(B[i]-'0'+A[j]-'0')%13+'0';
            }
        }   
    }
    for(int i=0;i<len2-len1;i++)//��A>B,�������Ԫ�ظ�ֵ����
        C[i]=B[i];
    for(int i=0;i<max;i++){
        cout<<C[i];
    }   
    return 0;
}*/




#include<iostream>
#include<string>
using namespace std;
int main(){
	string A,tB;
	int i,j;
	cin>>A>>tB;
	int len1=A.size();
	int len2=tB.size();
	int max=len1>len2?len1:len2;
	char C[1000];
	string B="";
	if(len1>len2){//���A��B��
		for(i=0;i<len1-len2;i++){
			B+='0';
		}
	}
	B+=tB;//�������
	for(i=B.size()-1,j=A.size()-1;i>=0&&j>=0;i--,j--){
		if((B.size()-i)%2==0){//���ұ��������ż��
			if(B[i]-A[j]<0){
				C[i]=(B[i]-A[j])+10+'0';	
			} 
			else{
				C[i]=(B[i]-A[j])+'0';
			} 
		}else{//����
			if((B[i]-'0'+A[j]-'0')%13==10)
				C[i]='J';
			else if((B[i]-'0'+A[j]-'0')%13==11)
				C[i]='Q';
			else if((B[i]-'0'+A[j]-'0')%13==12)
				C[i]='K';
			else C[i]=(B[i]-'0'+A[j]-'0')%13+'0';
		}	
		
	}
	for(i=0;i<len2-len1;i++){
		C[i]=B[i];//���B>A���������Ԫ�ظ�ֵ����
	}	
	for(i=0;i<max;i++){
		cout<<C[i];
	}		
	return 0;
}
