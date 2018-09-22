#include<bits/stdc++.h>
using namespace std;

int main(){
 int T;
 cin>>T;
 for(int i=1; i<=T; ++i){
   int n,x,k;
   cin>>n>>k>>x;
   int unit = (n*(n+1))/2;
   int sum1 = ((x+k-1)*(x+k))/2;
   int sum2 = ((x-1)*(x))/2;
   int diff = sum1-sum2;
   int result = unit-diff;
   cout<<"Case"<<" "<<i<<": "<<result<<endl;
 }
 return 0;
}

