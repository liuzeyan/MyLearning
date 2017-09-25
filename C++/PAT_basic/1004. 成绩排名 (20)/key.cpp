#include <iostream>
#include <string>
using namespace std;
int main()
   {
     int n,c1,c2,max=0,min=100;
     cin>>n;
     string stu[n][2];
     string a;
     int s[n];
     for(int i=0;i<n;i++)
        cin>>stu[i][0]>>stu[i][1]>>s[i];
     for(int i=0;i<n;i++)
     {
       if(s[i]>=max)
        {max=s[i];
         c1=i;
	    }
       if(s[i]<=min)
        {min=s[i];
         c2=i;
        }
	 }
     cout<<stu[c1][0]<<' '<<stu[c1][1]<<endl<<stu[c2][0]<<' '<<stu[c2][1];
     return 0; 
   }
