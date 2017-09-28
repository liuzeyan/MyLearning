#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
   {
     vector <string> say;
     string word;
     while(cin>>word){
     	say.push_back(word);
     }
     for(int i=say.size()-1;i>0;i--){
     	cout<<say[i]<<" ";
     }
     cout<<say[0];
     return 0; 
   }
