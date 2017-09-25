#include <iostream>
using namespace std;
int main()
   {
     int n,a=0,b=0;
     cin>>n;
     int z[n][4];
     for(int i=0;i<n;i++)
         for(int j=0;j<4;j++)
             cin>>z[i][j];
     for(int i=0;i<n;i++)
        {
		 if(z[i][0]+z[i][2]==z[i][1]&&z[i][0]+z[i][2]!=z[i][3])
            b++;
         if(z[i][0]+z[i][2]==z[i][3]&&z[i][0]+z[i][2]!=z[i][1])
            a++;
        }
     cout<<a<<" "<<b;
     return 0; 
   }
