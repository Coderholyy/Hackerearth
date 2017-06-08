#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int t,i,j,q,n,m;
    cin >> n >> m;
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    cin >> t;
    while(t--){
        int k=0;
        cin >> q;
        for(i=0;i<n;i++){
                if(q<a[i][0] || q>a[i][m-1]) continue;
            for(j=0;j<m;j++){
                if(q==a[i][j]){
                    printf("%d %d\n",i,j);
                    k=1;
                    break;
                }
                else if(q<a[i][j]) break;
            }
            if(k==1) break;
        }
        if(k==0)    printf("-1 -1\n"); 
    }
    return 0;
}
