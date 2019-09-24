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
int main(){
     
	fastio;
	ll a1,a2,k1,k2,n;
	cin >> a1 >> a2 >> k1 >> k2 >> n;
	ll ans1, ans2;
	ans1 = ans2 = 0ll;
	if(k2 < k1){
		swap(k2,k1);
		swap(a2,a1);
	}
	ll aux = n;
	if(a1*k1 <= n){
		n -= a1*k1;
		ans2+=a1;
	}
	else{
		ans2 += n/k1;
		n -= (n/k1)*k1;
		
	
	}
	if(a2*k2 <= n){
			n -= k2*a2;
			ans2+=a2;
		}
		else{
			ans2 += n/k2;
			n -= (n/k2)*k2;
		}
	
	n = aux;
	n -= (a1*(k1-1) + a2*(k2-1));
	if(n<0) ans1 = 0;
	else{
		ans1 = n;
	}
	cout << ans1 << " " << ans2 << "\n";
}	
