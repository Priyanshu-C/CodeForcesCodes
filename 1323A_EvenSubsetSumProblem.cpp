#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
typedef vector<int>		vi;
//======================

int main() {
    int n,i,j;
    int nn;cin>>nn;
    while(nn--)
    {
        cin>>n;
        vi ar(n);
        fo(i,n)
        cin>>ar[i];
        if(n==1 and ar[0]%2!=0)
        {
        cout<<-1<<endl;continue;}
        int c=0;
        fo(i,n)
        {
            if(ar[i]%2!=0)
            c++;
            else
            {   cout<<1<<endl;
                cout<<i+1<<endl;
                break;
            }
            if(c==2)
            {   cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                break;
            }
        }


    }
    return 0;
}


