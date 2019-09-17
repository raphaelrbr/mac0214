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

ll freq[100100];


int main(){

	fastio;
	ll n, k;
	cin >> n >> k;
	for(ll i = 30; i>=0; i--){
		if(n&(1ll<<i)) 
		{
			
			freq[i] = 1;
		}
	}
	ll atual = __builtin_popcount(n);
	if(k < atual) cout << "NO\n";
	else{
		ll i = 30;
		while(atual < k && i > 0){
			int vezes = min(freq[i], k-atual);
			for(ll j = 0; j < vezes; j++){
			        atual+=1;
		       		freq[i-1]+=2;
	 			freq[i]--;
			}
			i--;
		}	
		if(atual < k) cout << "NO\n";
		else{
			cout << "YES\n";
			for(ll i = 30; i>=0; i--){
				for(ll j = 0; j<freq[i]; j++){
					cout << (1<<i) << " ";
				}
			
			}
			cout << "\n";	
		}
	}

}
