#include <iostream>
#include<algorithm>
using namespace std;
int main()
   {
     int n;
     double p;
	 cin>>n>>p;
	 double list[n];
	 int a[n];
	 for(int i=0;i<n;i++){
	    cin>>list[i];
     }
     sort(list,list+n);//输入排序
	 //计算各元素作为最小值时的数列长度 
     for(int i=0;i<n;i++){
        a[i]=1;
        for(int j=i+1;j<n;){
        	if(list[j]<=list[i]*p){
        		j++;
        		a[i]++;
        	}
        	else{
        		break;
        	}
        }
     }
     //排序输出最大 
     sort(a,a+n);
     cout<<a[n-1];
     return 0; 
   }
