#include <iostream>
using namespace std;
int main()
   {
     int t;
     cin>>t;
     long num[t][3];//定义为int型可能被判为出错 
     for(int i=0;i<t;i++)
       {for(int j=0;j<3;j++)
         cin>>num[i][j];
        if(num[i][0]+num[i][1]>num[i][2])
         cout<<"Case #"<<i+1<<": true"<<endl;
        else
         cout<<"Case #"<<i+1<<": false"<<endl;
       }
     return 0; 
   }
