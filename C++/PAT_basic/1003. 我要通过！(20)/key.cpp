#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string pat[n];
	int ma,mb,mc;//各位置字符‘A’的数量
	int f[n],p[n],a[n],t[n];//字符合理标志,1为正确，其他为错误 
	for(int i=0;i<n;i++){
		cin>>pat[i];
		f[i]=1;
		p[i]=0;
		t[i]=0; 
		//判断字符类型是否正确		
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
				//'T'不能在'P'前面 
				if(t[i]>p[i]){
					f[i]=0;
				}
			}
		}		
		if(p[i]!=1||a[i]!=1||t[i]!=1){
			f[i]=0;
		}
		if(f[i]==0) continue;
		//判断字符‘A’数量关系是否正确 
		//每次计数前置零 
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
