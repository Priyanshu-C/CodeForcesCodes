#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define pop i<=j and 
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
int mpow(int base, int exp); 
void ipgraph(int m);
void dfs(int u, int par);
const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];

int main() {
    int n,j,i;
    cin>>n;
    vi ar(n);
    fo(j,n)
    {
        cin>>ar[j];
    }
    int sum=0;
    int taxi=0;
    sort(ar.begin(),ar.end());
    j=n-1;
    i=0;
    while(ar[j]==4)
    {
        j--;
        taxi++;
    }
    while(ar[j]==3)
    {
        if(pop ar[i]==1)
        {
            j--;
            i++;
            taxi++;
        }
        else
        {
            j--;
            taxi++;
        }
        
    }
    while(pop ar[j]==2)
    {
        if(pop ar[i]==1)
        {
            if(pop ar[i+1]==1)
            {
                i=i+2;
                j--;
                taxi++;
            }
            else
            {
                i++;
                j--;
                taxi++;
            }
            
        }
        else if(pop ar[i]==2)
        {
            i++;
            taxi++;
            j--;
        }
        else
        {
            j--;
            taxi++;
        }
        
        
    }
    sum=0;
    while(pop ar[j]==1)
    {
        sum=ar[j];
        while(pop sum+ar[i]<=4)
        {
            sum+=ar[i];
            i++;
        }
        j--;
        taxi++;
    }
    cout<<taxi;

    return 0;
}

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void ipgraph(int n, int m){
	int i, u, v;
	while(m--){
		cin>>u>>v;
		g[u-1].pb(v-1);
		g[v-1].pb(u-1);
	}
}

void dfs(int u, int par){
	for(int v:g[u]){
		if (v == par) continue;
		dfs(v, u);
	}
}


