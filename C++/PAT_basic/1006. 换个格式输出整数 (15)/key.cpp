#include <iostream>
using namespace std;
int main()
   {
     int n,a[3]={0,0,0};
     cin>>n;
     for(int i=0;;i++)
     {if(n<10)
        {a[i]=n;
         break;}
      a[i]=n%10;
      n=n/10;
     }
     if(a[2]!=0)
       for(int i=1;i<=a[2];i++)
         cout<<"B";
     if(a[1]!=0)
       for(int i=1;i<=a[1];i++)
         cout<<"S";
     if(a[0]!=0)
       for(int i=1;i<=a[0];i++)
         cout<<i;
     return 0; 
   }
