#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t,i,j,n;
    string s;
    while(getline(cin,s)){
        n=s.length();
        if(s[0]>=97 && s[0]<=122) s[0]=s[0]-32;
        for(i=1;i<n;i++){
            if(s[i-1]==' '){
                if(s[i]>=97 && s[i]<=122) s[i]=s[i]-32;
            }
        }
        cout << s <<endl;
    }
   
    return 0;
}
