#include <iostream>
#include <iomanip>
using namespace std;
int main()
   {
     int n,m;
	 char c;
	 cin>>n>>c;
	 //ȷ���߳� 
	 if(n%2==0)
	   m=n/2;
	 else
	   m=n/2+1;
	 //����������� 
	 char p[m][n];
	 //��ʽ������� 
	 for(int i=0;i<m;i++)
	    {
	     if(i==0||i==m-1)
	       cout<<setfill(c)<<setw(n)<<c<<endl;
	     else
	       cout<<c<<setfill(' ')<<setw(n-1)<<c<<endl;
		}
     return 0; 
   }
