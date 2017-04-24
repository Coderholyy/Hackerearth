#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a[26]={ 0 };
    int i,j,n;
    n=s.length();
    for(i=0;i<n;i++){
        a[s[i]-97]++;
    }
    for(i=0;i<n;i++){
        j=s[i]-97;
        if(a[j]){
            cout << s[i];
            a[j]=0;
        }
    }
 //   cout << "Hello World!" << endl;
    return 0;
}
