#include <iostream>
using namespace std;
int main()
   {
     int n,m;
	 cin>>n>>m;
	 int score[m],key[m],stu[n][m],per[n];//�����ֵ���𰸡�ѧ���ش𡢵÷� 
	 for(int i=0;i<n;i++)//��ʼ���÷�Ϊ0 
	    per[i]=0;
	 for(int i=0;i<m;i++)//���벿�� 
	    cin>>score[i];
	 for(int i=0;i<m;i++)
	    cin>>key[i];
	 for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++)
	       cin>>stu[i][j];
     for(int i=0;i<n;i++)//����÷ֲ���� 
	    {for(int j=0;j<m;j++)
	       if(stu[i][j]==key[j])
	         per[i]=per[i]+score[j];
	     cout<<per[i]<<endl;
		}
     return 0; 
   }
