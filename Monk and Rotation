#include <iostream>
using namespace std;

int main()
{
    int t,i,j;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        k = k%n;
        i=0;
        while(i<n){
            if(k==0) k=n;
            cout << a[n-k] << " "; 
            k--;
            i++;
        }
        cout << endl;
    }
    return 0;
}
