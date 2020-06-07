//https://codeforces.com/problemset/problem/490/A
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define fok(i,k,n) for(i=k;i<n;i++)
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
    int n,i,j;
    cin>>n;
    vi ar(n);
    vvi ans;
    fo(i,n)
    cin>>ar[i];
    i=0,j=0;
    int k=0;
    while(k<n and i<n and j<n)
    {
        while(i<n and ar[i]!=1)
        i++;
        while(j<n and ar[j]!=2)
        j++;
        while(k<n and ar[k]!=3)
        k++;
        if(i<n and j<n and k<n)
        {
        vi p={i+1,j+1,k+1};
        ans.push_back(p);
        }
        i++;j++;k++;
    }
    cout<<ans.size()<<endl;
    fo(i,ans.size())
    {
        fo(j,3)
        cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
