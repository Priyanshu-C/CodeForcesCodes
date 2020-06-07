    //https://codeforces.com/problemset/problem/1353/B
    #include <bits/stdc++.h>
    using namespace std;
    #define gc getchar_unlocked
    #define FIN ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
        FIN
        int n,i,j;
        cin>>n;
        int pp=1;
        while(n--)
        {   
            int s;cin>>s;
            int k;cin>>k;
                                                // deb2(s,k);deb(n);
            vi ar(s);
            fo(i,s)
            cin>>ar[i];
            sort(all(ar));
            priority_queue<int, vector<int>, less<int>> pq;
            int spq=0;
            fo(i,s)
            {
                cin>>j;
                pq.push(j);
              
            }
            //   while(pq.size()>k)
            //     pq.pop();
            // while(!pq.empty())
            // {
            //     deb(pq.top());
            //     pq.pop();
            // }        
            int sum=0;
            fo(i,s)
            {
                
                if(!k or ar[i]>pq.top())
                {
                // deb(ar[i]);
                sum+=ar[i];
                }
                else if(k--)
                { 
                //    deb(ar[i]);
                //      deb(pq.top());
                    sum+=pq.top();
                    pq.pop();
                }
            }
            cout<<sum<<endl;
        }
    return 0;
    }

