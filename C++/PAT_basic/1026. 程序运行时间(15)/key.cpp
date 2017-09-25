#include <iostream>
#include <iomanip>
using namespace std;
int main()
   {
	 double c1,c2,t,t4;
	 int t3;
	 int h,m,s;
	 cin>>c1>>c2;
	 t=(c2-c1)/100;
	 t3=t;
	 t4=t-t3;
	 if(t4>=0.5)
	    t3=t3+1;
	 h=t3/3600;
	 m=t3/60-h*60;
	 s=t3-h*3600-m*60;
	 cout<<setfill('0')<<setw(2)<<h<<':'<<setfill('0')<<setw(2)<<m<<':'<<setfill('0')<<setw(2)<<s; 
     return 0; 
   }
