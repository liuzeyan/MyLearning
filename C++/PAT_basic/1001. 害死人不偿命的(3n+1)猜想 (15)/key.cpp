#include <iostream>
using namespace std;
int main()
  {
     int n;
     int a=0;
     cin>>n;
     for(n;n>1;){
	    if(n%2==0){
		   n=n/2;
           a++;
		}
        if(n>1&&n%2!=0){
	       n=(n*3+1)/2;
           a++;
	    }
     }
     cout<<a;
     return 0; 
  }
