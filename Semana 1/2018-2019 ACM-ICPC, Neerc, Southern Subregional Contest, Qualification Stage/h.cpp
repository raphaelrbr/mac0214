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
	ll n,m;
	ll x1,x2, y1,y2;
	double ans = 0;
	cin >> n >> m;
	cin >> x1 >> y1 >> x2 >> y2;

	if((y1-1)%2) {
		ans += (x2-x1) + 1;
	}

	if((m-y2)%2){
		ans += (x2-x1) + 1;
	}

	if(m%2){
		ans += n-(x2-x1+1);

	}


	cout << ceil(ans/2) << "\n";

}