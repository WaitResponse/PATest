#include<iostream>
#include<cstdlib>//下面的头文件都可以省略
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
        bool isNumber=true;     //判断是否为合法数字
        int point=0;            //监视小数点的个数
        int point_=0;           //监视小数点之后的位数
        //num[i] = (char *)malloc(10*sizeof(char)); //申请空间
		num[i]=new  char[101];//两种方式申请空间,这里可以用string或二维数组代替指针
        cin>>num[i];
	//	scanf("%s",num[i]);
        int len=strlen(num[i]);
        double temp=atof(num[i]);//将字符串转换成数字，如果是字母，则把对应的ASCII码值放进去
        if(temp<-1000||temp>1000)   isNumber=false;//第一种情况：范围超出
        for(int j=0;j<len;j++){  //对每一个元素的各个字符进行判断
            if(point==1) point_++;  //只有一个小数点，小数位数+1
            if(num[i][j]=='-'&&j!=0){//第二种情况，负号不是在第一位
                isNumber=false;
                break;
            }
            if(num[i][j]!='.'){     
                if((num[i][j]<'0'||num[i][j]>'9')&&(num[i][j]!='-')){//第三种情况是字母
                    isNumber=false;
                    break;
                }       
            }else {             
                point++;//是小数点
            }
            if(point_>2||point>1){//第四种情况如果小数点大于一个或者小数位数多余2
                isNumber=false;
                break;
            }
        }
        if(!isNumber)
            cout<<"ERROR: "<<num[i]<<" is not a legal number"<<endl;
        else {
            count++;//数字的数量++
            average+=temp;//合法数字的和
        }
    }
    if(count==1)//只有一个合法数字
        printf("The average of 1 number is %.2lf",average);
    else if(count==0)//没有合法数字
        printf("The average of 0 numbers is Undefined");
    else//符合条件 ，数组平均值
        printf("The average of %d numbers is %.2lf\n",count,average/count);
    return 0;
}