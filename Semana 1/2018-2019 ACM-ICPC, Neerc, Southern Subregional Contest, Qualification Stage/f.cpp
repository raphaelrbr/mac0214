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

int calcula(int n){

	//return atoi(s[0]) + atoi(s[1]) + atoi(s[2]) - atoi([3]) - atoi([4]) - atoi([5]);
	int ret = 0;
	fr(i,3){
		ret -= n%10;
		n/=10;
	}
	while(n){
		ret += n%10;
		n/=10;
	}

	return abs(ret);

}

int ans[100100];
int freq[100];
pair<int,int> query[100100];


int main(){

	fastio;
	int n;
	cin >> n;
	fr(i,n){
		cin >> query[i].fst;
		query[i].snd = i;
	}


	sort(query, query+n);
	int last = 0;
	freq[0] = 1;
	fr(i,n){
		int atual = query[i].fst;
		int valorAtual = calcula(atual);
		int ind = query[i].snd;

		while(last <atual){
			last++;
			int valor = calcula(last);
			freq[valor]++;

		}
		fr(i,valorAtual){
			ans[ind] += freq[i];
		}

	}

	fr(i,n){
		cout << ans[i] << "\n";
	}

}