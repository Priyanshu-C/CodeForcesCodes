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
    int n,i,j;
    string x;
    cin>>x;
    n=x.size();
    vi dp1(n,0);
    vi dp2(n,0);

    if(x[0]=='Q')
    dp1[0]=1;
    if(x[n-1]=='Q')
    dp2[n-1]=1;

    for(i=1;i<n;i++)
    {
        if(x[i]=='Q')
        dp1[i]=dp1[i-1]+1;
        else
        {
            dp1[i]=dp1[i-1];
        }
    }
    for(int i=1;i<n;i++)
    {
        if(x[n-i-1]=='Q')
        dp2[n-i-1]=dp2[n-i]+1;
        else
        {
            dp2[n-i-1]=dp2[n-i];
        }
        
    }

    // fo(i,n)
    // cout<<x[i]<<" ";
    // cout<<endl;
    

    // fo(i,n)
    // cout<<dp1[i]<<" ";
    // cout<<endl;
    

    // fo(i,n)
    // cout<<dp2[i]<<" ";
    // cout<<endl;

    int sum=0;
    fo(i,n)
    {
        if(x[i]=='A')
        sum+=dp1[i]*dp2[i]; 
    }
    cout<<sum;


    return 0;
}




