#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll bigmod(ll a,ll b,ll m)
{
    if(b==0LL) return 1%m;
    ll x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1LL) x=(x*a)%m;
    return x;
}

int main()
{
    ll a,b,m;
    cin>>a>>b>>m;
    cout<<bigmod(a,b,m);
    getchar();
}
