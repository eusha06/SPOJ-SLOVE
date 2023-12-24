#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define MOD 1000000007
#define w(t) int t; cin>>t; while (t--)
const int N = 1e5+10;
long long n,m,c;
long long cow[N];
bool fou(int mm){
     long long last = -1;
     long long cow_pt = c;
     for (int i=0; i<n; i++){
     	if (cow[i]-last>=mm || last==-1){
     		cow_pt--;
     		last = cow[i];
     	}
     	if (cow_pt == 0) break;
     }
     return cow_pt ==0;
} 
int main() {
w(t){
cin>>n>>c;
for (ll i=0; i<n; i++){
	cin>>cow[i];
}
sort(cow, cow+n);
ll lo = 0, hi = 1e9, mid;
while (hi-lo>1){
	mid = (lo+hi)/2;
	if (fou(mid)){
		lo = mid;
	}
	else {
		hi = mid-1;
	}
}
if (fou(hi)){
	cout<<hi<<endl;
}
else {
	cout<<lo<<endl;
}
}
return 0;
} 
