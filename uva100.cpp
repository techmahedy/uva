#include<bits/stdc++.h>
using namespace std;

long long uva_100(long long n){
  if(n==1){
    return 1;
  }
  else if(n&1){
    uva_100(3*n+1)+1;
  }
   else{
    uva_100(n/2)+1;
  }
}
  long long mx_cycle(long long  a, long long  b){
    if(a>b){
         return mx_cycle(b,a);
    }
      long long mx=0,cycle;
      while(a<=b){
        cycle=uva_100(a);
        if(mx<cycle)
             mx = cycle;
             a++;
      }
      return mx;
}

int main(){
   int a,b;
   while(scanf("%d%d",&a,&b)!=EOF){
      cout<<a<<" "<<b<<" "<<mx_cycle(a,b)<<endl;
   }
return 0;
}
