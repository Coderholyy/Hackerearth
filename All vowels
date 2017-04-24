#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int n,i,c=0;
    map<char,int> m;
    string s;
    cin >> n >> s;
    for(i=0;i<n;i++){
        if(c>=5) break;
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            if(m[s[i]]==0) c++;
            m[s[i]]++;
        }
    }
    if(c>=5) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
