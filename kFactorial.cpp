#include <bits/stdc++.h>
using namespace std;
vector<int> Z;
void kFactorization(int n, vector<int> A) {
if(n<=1){
    return;
}
    int x;
    for(int i=A.size()-1;i>=0;i--){
        if(n%A[i]==0){
            x=n/A[i];
            break;
        }
        else{
            x=-1;
        }
    }
    if(x==-1){
        Z.clear();
        Z.push_back(x);
        return;
    }
    kFactorization(x, A);
    Z.push_back(x);
}

int main()
{
  int n;
  cin>>n;
  int s;
  cin>>s;
  vector<int> a(s);
  for(int i=0;i<s;i++){
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  kFactorization(n,a);
  //cout<<Z.size()<<endl;
  if(Z[0]!=-1){
  Z.push_back(n);
  for(int i:Z){
    cout<<i<<" ";
  }
}
  else{
      cout<<-1;
  }
}

