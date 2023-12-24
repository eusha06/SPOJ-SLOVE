#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define MOD 1000000007
#define w(t) int t; cin>>t; while (t--)
const int N = 1e6+10;
long long n,m,w=0;
long long trees[N];
bool is(int h){
	w=0;
	for (int i=0; i<n; i++){
		if (trees[i] >=h){
			w+= (trees[i]-h);
		}
	}
	return w>=m;
}
int main() {
cin>>n>>m;
for (int i=0; i<n; i++){
	cin>>trees[i];
}
ll lo=0, hi=1e9, mid;
while (hi-lo>1){
	mid = (hi+lo)/2;
	if (is(mid)){
		lo = mid;
	}
	else {
		hi = mid-1;
	}
}
if (is(hi)){
	cout<<hi<<endl;
}
else {
	cout<<lo <<endl;
}
 
return 0;
} 
