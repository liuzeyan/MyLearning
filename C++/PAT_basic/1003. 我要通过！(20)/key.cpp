#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string pat[n];
	int ma,mb,mc;//��λ���ַ���A��������
	int f[n],p[n],a[n],t[n];//�ַ������־,1Ϊ��ȷ������Ϊ���� 
	for(int i=0;i<n;i++){
		cin>>pat[i];
		f[i]=1;
		p[i]=0;
		t[i]=0; 
		//�ж��ַ������Ƿ���ȷ		
		for(int j=0;pat[i][j]!='\0';j++){			
			if(pat[i][j]!='P'&&pat[i][j]!='A'&&pat[i][j]!='T'){
				f[i]=0;
			}			
			if(pat[i][j]=='P'){
				p[i]++;
			}			
			if(pat[i][j]=='A'){
				a[i]=1;
			}			
			if(pat[i][j]=='T'){
				t[i]++;
				//'T'������'P'ǰ�� 
				if(t[i]>p[i]){
					f[i]=0;
				}
			}
		}		
		if(p[i]!=1||a[i]!=1||t[i]!=1){
			f[i]=0;
		}
		if(f[i]==0) continue;
		//�ж��ַ���A��������ϵ�Ƿ���ȷ 
		//ÿ�μ���ǰ���� 
		ma=0;
		mb=0;
		mc=0;
		for(int k=0;k<pat[i].length();k++){
			if(pat[i][k]!='P'){
			   ma++;
		    }else break;
		}
		for(int k=ma+1;k<pat[i].length();k++){
			if(pat[i][k]!='T'){
				mb++;
			}else break;
		}
		for(int k=ma+mb+2;k<pat[i].length();k++){
			mc++;
		}
		if(ma*mb!=mc){
			f[i]=0;
		}	
	}
	for(int i=0;i<n;i++){
		if(f[i]==1){
    		cout<<"YES"<<endl;
    	}else cout<<"NO"<<endl;
	} 
	return 0;
}
