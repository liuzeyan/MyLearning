#include <iostream>
using namespace std;
int main()
   {
     int m,t,a=0;//tΪ�м���� 
	 cin>>m;
	 int n[m];
	 for(int i=0;i<m;i++)
	    cin>>n[i];
	 for(int i=0;i<m;i++)//���һ�����ڱ任�в�������ԭ������ͬ��Ԫ�أ����ԭ����Ԫ������ 
	    {
	     t=n[i];//������t	
	     if(t==0)
	        continue;
	     while(t!=1)//��ʼ�任 
	        {
	         if(t%2==0)
	            t=t/2;
	         else
	            t=(3*t+1)/2;
	         for(int j=0;j<m;j++)//�ж��Ƿ����� 
	            {
	             if(n[j]==t)
	               {
	                n[j]=0;
	                break;
				   }
	            }
	        }
		 }
	 for(int i=0;i<m;i++)//���� 
	    for(int j=i+1;j<m;j++)
	       {
	        if(n[i]<n[j])
	          {
	          t=n[i];
	          n[i]=n[j];
	          n[j]=t;
	          }
	       }
	for(int i=0;i<m;i++)//��� 
	   if(n[i]!=0&&n[i+1]!=0)
	     cout<<n[i]<<" ";
	   else
	     if(n[i]!=0)
	       cout<<n[i];
     return 0; 
   }
