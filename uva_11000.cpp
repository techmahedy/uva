#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n=3,sum,a,b;
    while(scanf("%lld",&n)){
        if(n<0) return 0;
        a=b=sum=0;
        for(i=0;i<=n;i++){
            sum=a+b+1;
            a=b;
            b=sum;
        }
        printf("%lld %lld\n",a,sum);
    }

    return 0;
}
