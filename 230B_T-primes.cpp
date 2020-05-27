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
    
    
            //SEIVE 

            const int MAX=1000000;
            vector <bool> SEIVE(MAX + 1, true);
                SEIVE[0] = SEIVE[1] = false;
                for (int i = 2; i * i <= MAX; ++i)
                    if (SEIVE[i])
                        for (int j = i * i; j <= MAX; j += i)
                            SEIVE[j] = false;

    map <ll int,bool> Tprimes;
    for(ll int i=2;i<MAX;i++)
    {
        if(SEIVE[i])
            {
                Tprimes[i*i] = true;
            }
    }
        ll int n;
        cin>>n;
        ll int j;
        while(n--)
        {
            cin>>j;
            if(Tprimes[j])
            cout<<"YES"<<endl;
            else
            {
                cout<<"NO"<<endl;
            }
            
        }

    return 0;
}




