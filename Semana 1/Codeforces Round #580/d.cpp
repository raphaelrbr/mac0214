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

ll v[100100];
vector<ll> adj[100100];
ll dis[100100];
ll ans = INF;
int a[60];

int bfs(ll a, ll b){

	queue<ll> fila;
	fila.push(a);
	ms(dis,INF);
	dis[a] = 0;
	while(!fila.empty()){
		ll x = fila.front(); fila.pop();
		for(auto y : adj[x]){
			if(dis[y] > dis[x] + 1 && (y!=b || x!=a)) {
				dis[y] = dis[x] + 1;
				fila.push(y);
			}
		}
	}
	return dis[b];
}


int main(){

	fastio;

	ll n;
	cin >> n;
	fr(i,n){
		cin >> v[i];
		if(v[i]==0){
			i--;
			n--;
			continue;
		}

	}
	if(n>120){
		cout << 3 << "\n";
		exit(0);
	}
	fr(i,n){
		fr(j,n){
			if( (v[i] & v[j]) != 0 && i!=j){
				adj[i].pb(j);
				adj[j].pb(i);
			}
		}
	}
	fr(i,n)
		fr(j,n)
			for(auto x : adj[i])
				if(x == j && i != j)
					ans = min(ans,bfs(i,j)+1ll);
	if(ans >= INF) ans = -1;
	cout << ans << "\n";

}