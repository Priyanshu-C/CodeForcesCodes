#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath> 
using namespace std;
inline int read(){
	int f=1,res=0;char c=getchar();
	while(c<'0'||c>'9') {if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){res=res*10+c-'0',c=getchar();}
	return f*res;
}
const int INF=2e9;
int t,n,a[200001],cnt=0,maxx,minn;
long long ans=0;
int fu(int x){
	if(x>0) return 1;
	else return 0;
}
int main(){
	t=read();
	while(t--){
		n=read();ans=0;
		for(int i=1;i<=n;i++){
			a[i]=read();
			if(i==1) maxx=a[i];
			if(i!=1){
				if(fu(a[i])!=fu(a[i-1])){
					ans+=maxx;
					maxx=a[i];
 				}
 				else maxx=max(maxx,a[i]);
			}
		}
		ans+=maxx;
		printf("%lld\n",ans);
	}
	
	return 0;
}