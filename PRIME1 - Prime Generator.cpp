#include <bits/stdc++.h>
using namespace std;
#define sakalakabumbum() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define MOD 1000000007
#define w(t) int t; cin >> t; while (t--)
int main() {
    sakalakabumbum();
    w(t) {
        ll l, r,j,i,c;
        cin >> l >> r;
        for ( i = l; i <=r ; i++) {
             c=0;
          for ( j = 2; j<=sqrt(i); j++) {
            if (i % j == 0) {
              c=1;
                break;
            }
            }
            if (c==0 && i!=1){
                cout<<i<<endl;
            }  
    }
    cout<<endl;
    }
    return 0;
}
 
