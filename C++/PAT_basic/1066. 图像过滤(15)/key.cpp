#include <iostream>
#include <iomanip>
using namespace std;
int main()
   {
     int m,n,a,b,c;
     cin>>m>>n>>a>>b>>c;
     int colour[m][n];
     for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
           {
		    cin>>colour[i][j];
            if(colour[i][j]>=a&&colour[i][j]<=b)
               colour[i][j]=c;
		   }
     for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
           {
		   cout<<setfill('0')<<setw(3)<<colour[i][j];
           if(j==n-1)
             cout<<endl;
           else
             cout<<' '; 
           }
     return 0; 
   }
