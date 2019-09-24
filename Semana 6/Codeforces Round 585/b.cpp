#include "bits/stdc++.h"
using namespace std;
     
#define pb push_back
#define mp make_pair
#define fst first
#define snd second
     
#define fr(i,n) 	for(int i=0;i<n;i++)
#define frr(i,n)	for(int i=1;i<=n;i++)
     
#define ms(x,i)	memset(x,i,sizeof(x))
#define dbg(x)	cout << #x << " = " << x << endl
#define all(x)	x.begin(),x.end()
     
#define gnl cout << endl
#define olar cout << "olar" << endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
     
typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef pair<ll,ll> pll;
     
const int INF = 0x3f3f3f3f;
const int MOD = 1e9+7;
 
ll pos[200200];
ll negs[200200];
ll v[200200];
int main(){
     
	fastio;
	ll n;
	cin >> n;
	fr(i,n) cin >> v[i];
	
	if(v[n-1] > 0){
		negs[n-1] = 0;
		pos[n-1] = 1;
	}
	else{
		negs[n-1] = 1;
		pos[n-1] = 0;
	}
	for(ll i = n-1; i>=0; i--){
		if(v[i] > 0ll){
			pos[i] = pos[i+1] + 1ll;
			negs[i] = negs[i+1];
		}
		else{
			negs[i] = pos[i+1] + 1ll;
			pos[i] = negs[i+1];
		
		}
	
	}
	ll ans1 = 0;
	ll ans2 = 0;
	fr(i,n) ans1 += pos[i];
	fr(i,n) ans2 += negs[i];
	cout << ans2 << " " << ans1 << "\n";
    	
}
