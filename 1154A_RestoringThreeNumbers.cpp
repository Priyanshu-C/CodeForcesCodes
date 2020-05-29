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

        int a,b,c;
        vi ar(4);
        fo(i,4)
        cin>>ar[i];
        sort(all(ar),less<int>());
        
        do
        {
        // fo(i,4)
        // cout<<ar[i]<<" ";
        // cout<<endl;

        c= ar[3]-ar[0];
        b= ar[3]-ar[2];
        a= ar[3]-ar[1];
        if(a>0 and b>0 and c>0)
        break;
        }while(next_permutation(all(ar)));
        cout<<a<<" "<<b<<" "<<c;
        return 0;
    }
