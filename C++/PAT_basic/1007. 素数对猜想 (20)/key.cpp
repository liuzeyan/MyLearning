#include <iostream>
#include <cmath>
using namespace std;
int main()
   {
     int n,f,t=0,m=0;//Nֵ��������ǣ��м�����������ԵĶ���
	 cin>>n;
	 int s[n];//��������
	 //�ж��Ƿ�Ϊ���� 
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
	 //�ж��Ƿ����������
	 for(t=t-1;t>=0;t--){
	 	if(s[t-1]-s[t]==2){
	 		m++;
	 	}
	 }
	 cout<<m; 
     return 0; 
   }
