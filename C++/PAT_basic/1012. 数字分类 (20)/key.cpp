#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
   {
     int n,t;//t为中间变量 
	 cin>>n;
	 vector <int> num;
	 while(cin>>t){
	 	num.push_back(t);
	 }
	 t=1;
	 int a1=0,a2=0,a3=0,a5=0,max=0,f_a2=0;//f_a2为a2类数字存在标志符
	 double a4=0,m=0;//m为中间变量 
	 //开始计算 
	 for(int i=0;i<num.size();i++){
	 	if(num[i]%5==0&&num[i]%2==0){
	 		a1=a1+num[i];
	 		continue;
	 	}
	 	if(num[i]%5==1){
	 		a2=a2+num[i]*t;
	 		t=(-t);
	 		f_a2++;
	 		continue;
	 	}
	 	if(num[i]%5==2){
	 		a3++;
	 		continue;
	 	}
	 	if(num[i]%5==3){
	 		a4=a4+num[i];
	 		m++;
	 		continue;
	 	}
	 	if(num[i]%5==4){
	 		if(num[i]>max){
	 			max=num[i];
	 		}
	 		a5=max;
	 	}
	 }
	 //a4的判断 
	 if(m==0){
	 	a4=0;
	 }else{
	 	a4=a4/m;
	 	if(a4<0.05&&a4>-0.05){
	 		a4=0;
	 	}
	 }
	 //输出部分 
	 if(a1==0){
	 	cout<<'N'<<" ";
	 }else{
	 	cout<<a1<<" ";
	 }
	 if(f_a2==0){
	 	cout<<'N'<<" ";
	 }else{
	 	cout<<a2<<" ";
	 }if(a3==0){
	 	cout<<'N'<<" ";
	 }else{
	 	cout<<a3<<" ";
	 }
	 if(a4==0){
	 	cout<<'N'<<" ";
	 }else{
	 	cout<<setiosflags(ios::fixed)<<setprecision(1)<<a4<<" ";
	 }
	 if(a5==0){
	 	cout<<'N';
	 }else{
	 	cout<<a5;
	 }
     return 0; 
   }
