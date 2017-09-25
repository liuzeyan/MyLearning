#include <iostream>
#include <string>
using namespace std;
int main()
   {
     int a[10]={0,1,2,3,4,5,6,7,8,9},b[10]={0,0,0,0,0,0,0,0,0,0};//定义元素及其各自初始数量 
     string N;
     cin>>N;
     for(int i=0;i<10;i++)
         for(int j=0;j<=N.length();j++)
             if(a[i]==N[j]-48)
                b[i]++;
     for(int i=0;i<10;i++)
         if(b[i]!=0)
            cout<<a[i]<<":"<<b[i]<<endl;
     return 0; 
   }
