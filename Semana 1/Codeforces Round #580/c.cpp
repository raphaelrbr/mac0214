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
     
    vector<int> primeiro;
    vector<int> segundo;
    int v[200200];
     
    int main(){
     
    	fastio;
    	int n;
    	cin >> n;
    	fr(i,2*n){
    		v[i] = i+1;
    	}
    	if(n%2){
    		int p = 0;
    		int q = 2*n-1;
    		int z = 0;
    		fr(i,n-1){
    			if(z==0){
    				primeiro.pb(v[p++]);
    				primeiro.pb(v[q--]);
    			}
    			else{
    				segundo.pb(v[p++]);
    				segundo.pb(v[q--]);
    			}
    			z+=1;
    			z%=2;
    			
    		}
    		primeiro.pb(v[p++]);
    		segundo.pb(v[q--]);
    	}
    	else{
    		int p = 0;
    		int q = 2*n-1;
    		int z = 0;
    		fr(i,n){
    			if(z==0){
    				primeiro.pb(v[p++]);
    				primeiro.pb(v[q--]);
    			}
    			else{
    				segundo.pb(v[p++]);
    				segundo.pb(v[q--]);
    			}
    			z+=1;
    			z%=2;
    			
    		}
     
    	}
    	ll somaPrimeiro = 0;
    	ll somaSegundo = 0;
    	int p = 0;
    	for(auto it : primeiro){
    		somaPrimeiro += it;
    	}
    	for(auto it : segundo){
    		somaSegundo += it;
    	}
    	
    	while(p<n-1){
    		somaPrimeiro -= *(primeiro.begin() + p);
    		somaPrimeiro += *(segundo.begin() + p);
    		somaSegundo -= *(segundo.begin() + p);
    		somaSegundo += *(primeiro.begin() + p);
    		if(abs(somaPrimeiro-somaSegundo > 1)){
    			cout << "NO\n";
    			exit(0);
    		}
    		p++;
    	}
    	cout << "YES\n";
    	for(auto it : primeiro) cout << it << " ";
    	for(auto it : segundo) cout << it << " ";
    	cout << "\n";
     
    }
