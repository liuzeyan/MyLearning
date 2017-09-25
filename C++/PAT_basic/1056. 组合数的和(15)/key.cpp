#include <iostream>
using namespace std;
int main()
  {int n,m=0;
   cin>>n;
   int num[n];
   for(int i=0;i<n;i++)
       cin>>num[i];
   for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
           if(num[i]!=num[j])
              m=m+num[i]*10+num[j];
   cout<<m;
   return 0; 
  }
