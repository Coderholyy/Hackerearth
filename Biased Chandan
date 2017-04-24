#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n,i,x,c=0;
    stack<int> s;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> x;
        if(x==0 && i!=0){
           s.pop();
        }
        else{
            s.push(x);
        }
    }
    
  
    while(!s.empty()){
        c+=s.top();
//        cout << s.top() << " ";
        s.pop();
    }
 
    cout << c << endl;
    return 0;
}
