#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n<=3)
      cout << 0 << "\n";
    else
      cout << n*(n-3) / 2 << "\n";
  }
  return 0;
}
