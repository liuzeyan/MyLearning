#include <iostream>
using namespace std;
int main()
   {
     int n,m;
	 cin>>n>>m;
	 int score[m],key[m],stu[n][m],per[n];//定义分值、答案、学生回答、得分 
	 for(int i=0;i<n;i++)//初始化得分为0 
	    per[i]=0;
	 for(int i=0;i<m;i++)//输入部分 
	    cin>>score[i];
	 for(int i=0;i<m;i++)
	    cin>>key[i];
	 for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++)
	       cin>>stu[i][j];
     for(int i=0;i<n;i++)//计算得分并输出 
	    {for(int j=0;j<m;j++)
	       if(stu[i][j]==key[j])
	         per[i]=per[i]+score[j];
	     cout<<per[i]<<endl;
		}
     return 0; 
   }
