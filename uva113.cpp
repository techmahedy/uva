#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,p;
    double k;
    while(scanf("%lf%lf", &n , &p)!=EOF){
        k = pow(p,1.0/n);
        printf("%.0lf\n", k);
    }
return 0;
}
