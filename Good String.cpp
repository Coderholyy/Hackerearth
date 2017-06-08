#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a[26] = { 0 };
    string s;
    cin >> s;
    int n=s.length();
    int c=0;
    for(int i=0;i<n;i++){
        if(a[(int)s[i]-97]==0) a[(int)s[i]-97]++;
        else c++;
    }
    cout << c << endl;
    return 0;
}
