//https://codeforces.com/problemset/problem/489/B
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
    int n,i,j,sum=0,t;
    int g,b;
    cin>>g;

    map <int,int> girls;
    map <int,int> boys;

    fo(i,g)
    {
        cin>>t;
        girls[t]++;
    }

    cin>>b;
    fo(i,b)
    {
        cin>>t;
        boys[t]++;
    }

    if(g>b)
    swap(girls,boys);

    tr(it,girls)
    {
        int t1 = it->first;
        int t2 = it->second;
        while(t2)
        {
            if(boys.find(t1-1)!=boys.end())
            {
                boys[t1-1]--;
                sum++;
                if(boys[t1-1]==0)
                boys.erase(t1-1);
            }
            else if(boys.find(t1)!=boys.end())
            {
                boys[t1]--;
                sum++;
                if(boys[t1]==0)
                boys.erase(t1);
            }
            else if(boys.find(t1+1)!=boys.end())
            {
                boys[t1+1]--;
                sum++;
                if(boys[t1+1]==0)
                boys.erase(t1+1);
            }
            t2--;
        }
    }
    cout<<sum;

    return 0;
}

