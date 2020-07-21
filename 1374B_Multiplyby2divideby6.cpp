#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(i,a,n) for (int i = (a); i < (n); ++i)
#define fore(i,a,n) for (int i = (a); i <= (n); ++i)
#define ford(i,a,b) for (int i = (a); i >= (b); --i)
#define MAX 1000000007LL
#define mod 998244353
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
#define pii pair<int,int>
#define pll pair<long,long>
const int N = (int)1e5 + 9;
ll power(ll x,ll y)
{
    if(y == 0)
        return 1;
    ll temp = power(x,y/2);
    if(y%2 == 1)
        return temp*temp*x;
    else    
        return temp*temp;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
 
        ll s1 = 0 , s2 = 0;
        while(n%2 == 0)
        {
            s1++;
            n/=2;
        }
        while(n%3 == 0)
        {
            s2++;
            n/=3;
        }
 
        if(n == 1)
        {
            if(s1 <= s2)
            {
                ll ans = min(s1,s2);
                s1-=ans;
                s2-=ans;
                ans += s2*2;
                cout<<ans<<"\n";
            }  
            else{
                cout<<"-1\n";
            }
        }
        else
            cout<<"-1\n";
    }
 
    return 0;
}