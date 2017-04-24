#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t,n;
    cin >> t;
    
    while(t--){
        int i=0;
        string s;
        cin >> n;
        cin >> s;
        for(i=1;i<n;i+=2){
            cout << s[i];
        }
        if(i==n+1) i=n-2;
        else if(i==n) i=n-1;
        while(i>=0){
            cout << s[i];
            i-=2;
        }
        cout << endl;
    }
    return 0;
}
