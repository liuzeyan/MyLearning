#include <iostream>
#include <cmath>
using namespace std;
int main()
   {
     int n,f,t=0,m=0;//N值，素数标记，中间变量，素数对的对数
	 cin>>n;
	 int s[n];//所有素数
	 //判断是否为素数 
	 for(int i=n;i>0;i--){
	 	f=1;
	 	for(int j=2;j<=sqrt(i);j++){
	 		if(i%j==0){
	 			f=0;
	 		}
	 	}
	 	if(f==1){
	 		s[t++]=i;
	 	}
	 }
	 //判断是否符合素数对
	 for(t=t-1;t>=0;t--){
	 	if(s[t-1]-s[t]==2){
	 		m++;
	 	}
	 }
	 cout<<m; 
     return 0; 
   }
