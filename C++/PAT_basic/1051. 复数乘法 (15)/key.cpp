#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
int main()
   {
     double r1,p1,r2,p2,a,b;
     cin>>r1>>p1>>r2>>p2;
     a=(r1*r2)*cos(p1+p2);  
     b=(r1*r2)*sin(p1+p2);
     //ע�������-0.01��0֮��ʱ�����-0�� 
     if(a<0&&a>-0.01)
        a=0;
     if(b<0&&b>-0.01)
        b=0;
	 cout<<fixed<<setprecision(2)<<a<<showpos<<b<<"i";
     return 0; 
   }
