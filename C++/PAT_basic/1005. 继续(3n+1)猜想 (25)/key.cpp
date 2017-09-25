#include <iostream>
using namespace std;
int main()
   {
     int m,t,a=0;//t为中间变量 
	 cin>>m;
	 int n[m];
	 for(int i=0;i<m;i++)
	    cin>>n[i];
	 for(int i=0;i<m;i++)//如果一个数在变换中产生了与原数列相同的元素，则把原数列元素置零 
	    {
	     t=n[i];//必须用t	
	     if(t==0)
	        continue;
	     while(t!=1)//开始变换 
	        {
	         if(t%2==0)
	            t=t/2;
	         else
	            t=(3*t+1)/2;
	         for(int j=0;j<m;j++)//判断是否置零 
	            {
	             if(n[j]==t)
	               {
	                n[j]=0;
	                break;
				   }
	            }
	        }
		 }
	 for(int i=0;i<m;i++)//排序 
	    for(int j=i+1;j<m;j++)
	       {
	        if(n[i]<n[j])
	          {
	          t=n[i];
	          n[i]=n[j];
	          n[j]=t;
	          }
	       }
	for(int i=0;i<m;i++)//输出 
	   if(n[i]!=0&&n[i+1]!=0)
	     cout<<n[i]<<" ";
	   else
	     if(n[i]!=0)
	       cout<<n[i];
     return 0; 
   }
