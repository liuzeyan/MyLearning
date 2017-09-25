#include <iostream> 
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int s[n];
    for (int i = 0; i < n; i++)
        cin>>s[i];
    sort(s, s+n);
    int result = s[0];
    for (int i = 1; i < n; i++)
        result = (result + s[i]) / 2;
    cout<<result;
    return 0;
}
