//https://codeforces.com/problemset/problem/1343/B
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



int main() {
    int n,i,j,nn;
    cin>>nn;
    vi ar1={2,4};
    vi ar2={1,5};
    while(nn--)
    {
      j=0;
      cin>>n;
      if((n/2)%2!=0)
      {
      cout<<"NO"<<endl;
      continue;
      }
      cout<<"YES"<<endl;
      
      int m=n;
      while(n>0)
      {
        n=n-4;
        fo(i,2)
        {
          cout<<ar1[i]+j*6<<" ";
        }
        j++;
      }
      n=m;
      j=0;
      while(n>0)
      {
        n=n-4;
        fo(i,2)
        {
          cout<<ar2[i]+j*6<<" ";
        }
        j++;
      }
      cout<<endl;
    }
    return 0;
}
