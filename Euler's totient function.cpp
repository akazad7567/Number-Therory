#include<bits/stdc++.h>
using namespace std;
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            while(n % i == 0)
                n /= i;
            result -= result / i;
            cout<<result<<' '<<i<<' '<<n<<endl;
        }
    }
    if(n > 1)
        result -= result / n;
    return result;
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int (Q)=phi(n);
        cout<<(Q)<<endl;
    }
}
