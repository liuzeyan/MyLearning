#include <iostream>
#include <string>
using namespace std;
int main()
   {
     int n,m;
     cin>>n;
	 string num[n];
	 int s[n],z[n];
	 for(int i=0;i<n;i++){
	 	cin>>num[i]>>s[i]>>z[i];
	 }
	 cin>>m;
	 int c[m];
	 for(int i=0;i<m;i++)
	    cin>>c[i];
	 for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	       if(c[i]==s[j])
	         cout<<num[j]<<" "<<z[j]<<endl;
     return 0; 
   }
