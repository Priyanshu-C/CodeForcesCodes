//https://codeforces.com/problemset/problem/489/C
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
    int d,s;
    cin>>d>>s;
    vi num(d,0);
    num[0]=1;
    if(d==1)
    {   
        if(d*9>=s)
        cout<<s<<" "<<s;
        else
        cout<<-1<<" "<<-1;
        return 0;
    }
    s = s - 1;
   
    if(s<0 or d*9<s+1)
    {
        cout<<-1<<" "<<-1;
        return 0;
    }
    j=d-1;
    int ss=s;
    while(s)
    {
        if(s>9)
        {
        num[j]=num[j]+9;
        s-=9;
        }
        else
        {
            num[j]=num[j]+s;
            s=0;
        }
        j--;
    }

    vi num2(d,0);
    s=ss;
    s=s+1;
    j=0;
    while(s)
    {
        if(s>9)
        {
        num2[j]=num2[j]+9;
        s-=9;
        }
        else
        {
            num2[j]=num2[j]+s;
            s=0;
        }
        j++;
    }

    // for(int x:num)
    // cout<<x<<" ";
    // cout<<endl;


    ll int sn=0;
    fo(i,d)
    cout<<num[i];
    cout<<" ";
    fo(i,d)
    cout<<num2[i];
    return 0;
}

