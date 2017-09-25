#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
	char ch1,ch2;
	int sum1=0,sum2=0;
	int c1 = 1,c2 =1;
	cin>>str1>>ch1>>str2>>ch2;
	for(int i=0;i<str1.length();i++)
	{	
		if(str1[i]==ch1)
		{
			sum1= sum1+c1*(ch1-48);
			c1=c1*10;
		}
	}
	for(int i=0;i<str2.length();i++)
	{	
		if(str2[i]==ch2)
		{
			sum2= sum2+c2*(ch2-48);
			c2=c2*10;
		}
	}
	cout<<sum1+sum2<<endl;
	return 0;
}
