#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int i,j=0;
        
        for(i=0;i<s.length();i++){
            if(s[i]=='B'){
                if(i>0 && s[i-1]=='W'){
                    s[i-1]='g';
                 j++;}
                if(i>1 && s[i-2]=='W'){
                    s[i-2]='g';
                 j++;
                }
                if(i<s.length()-2 && s[i+2]=='W'){
                    s[i+2]='g';
                 j++;
                }
                if(i<s.length()-1 && s[i+1]=='W'){
                    s[i+1]='g';
                j++;}
            }
            
        }
        cout << j << endl;
    }
 //   cout << "Hello World!" << endl;
    return 0;
}
