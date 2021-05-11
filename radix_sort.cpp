#include<bits/stdc++.h>
using namespace std;
void radix_sort(vector<int>& a,long n,int mode=1,int x=10){
    if(mode>n){
        return;
    }
    else{
    vector<vector<int>> s(10);
    for(int i=0;i<a.size();i++){
        s[(a[i]%x)/(x/10)].push_back(a[i]);
    }
    a.clear();
    for(int i=0;i<10;i++){
        for(int j=0;j<s[i].size();j++){
            a.push_back(s[i][j]);
        }
    }
    mode++;
    x*=10;
    radix_sort(a,n,mode,x);
    }
}

int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>> a[i];
  }
  int maximum=a[0];
  for(int i=0;i<n;i++){
    if(a[i]>maximum){
        maximum=a[i];
    }
  }

  radix_sort(a,log(maximum)+1);
  for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
  }
}
