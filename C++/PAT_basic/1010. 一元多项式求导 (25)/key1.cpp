#include <iostream>  
using namespace std;  
class N{
  public:
    int c;  
    int e;  
}po[2000], de[2000];  
  
int main(){  
    int x, y, t = 0, k = 0;  
    while (cin >> x >> y){  
        po[t].c = x;  
        po[t++].e = y;  
    }  
    for (int i = 0; i < t; i++){  
        if (po[i].e){  
            de[k].c = po[i].c*po[i].e;  
            de[k++].e = po[i].e - 1;  
        }  
    }  
    if (k == 0){  
        cout << "0 0" << endl;  
        return 0;  
    }  
    for (int i = 0; i < k; i++)  
        cout << de[i].c << " " << de[i].e << (i-k+1 ? " ": "\n");  
    return 0;  
}  
