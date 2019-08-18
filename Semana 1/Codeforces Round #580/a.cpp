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
     
    int v[1000];
    int g[1000];
     
    int main(){
     
    	fastio;
    	int n;
    	cin >> n;
    	fr(i,n){
    		cin >> v[i];
    	}
    	int m;
    	cin >> m;
    	fr(i,m){
    		cin >> g[i];
    	}
     
    	fr(i,n){
    		fr(j,m){
    			int a = v[i];
    			int b = g[j];
    			int flag = 1;
    			fr(z,n){
    				if(v[z] == a+b) flag = 0;
    			}
    			fr(z,m){
    				if(g[z] == a+b) flag = 0;
    			}
     
    			if(flag){
    				cout << a << " " << b << "\n";
    				exit(0);
    			}
    		}
    	}
     
    }
