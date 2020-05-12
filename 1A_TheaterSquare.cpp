#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double l,b,s;
    cin>>l>>b>>s;
    l=ceil(l/s);
    b=ceil(b/s);
    long long int x = (int)l*b;
    cout<<fixed<<x;
	return 0;
}