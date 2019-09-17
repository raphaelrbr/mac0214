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

vector<int> adj[200200];

vector<int> ans;
int vis[200200];
void solve(int a){
	ans.pb(a);
	vis[a] = 1;
	for(int x : adj[a]){
		if(!vis[x]) solve(x);
	}
	
}

int main(){


	fastio;
	int n;
	cin >> n;
	int primeiro, segundo;
	cin >> primeiro >> segundo;
	fr(i,n-1){
		int a, b;
		cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	vis[1] = 1;
	vis[primeiro] = 1;
	ans.pb(1);
	ans.pb(primeiro);
	solve(segundo);
	if(ans.size() < n){
		ms(vis,0);
		ans.clear();
		ans.pb(1);
		ans.pb(segundo);
		vis[1] = 1;
		vis[segundo] = 1;
		solve(primeiro);
	}
	for(auto x : ans) cout << x << " ";
	cout << "\n";


}
