#include <iostream>
using namespace std;

int main()
{
    int t,n,i,am,bm;
    cin >> t;
    while(t--){
    cin >> n;    
    int *b = new int[n];
    int *a = new int [n];
    am=0;bm=0;
    for(i=0;i<n;i++){
        cin >> b[i];
        if(b[i]>bm) bm=b[i];
    }
    for(i=0;i<n;i++){
        cin >> a[i];
        if(a[i]>am) am=a[i];
    }
    if(am==bm) cout << "Tie" << endl;
    else if(am<bm) cout << "Bob" << endl;
    else cout << "Alice" << endl;
    }
    return 0;
}
