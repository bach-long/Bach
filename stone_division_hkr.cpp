#include <bits/stdc++.h>

using namespace std;

long long stoneDivision(long long n, vector<long long > s,long long dis,long long turn=1,long long times=1) {
          long long x=0;
          long long pos;
          for(long long i=dis;i>=0;i--){
            if(s[i]==0||s[i]==n)
            continue;
            if(n%s[i]==0){
                x=s[i];
                pos=i-1;
                break;
            }
          }
          if(x==0)
            return 0;
          else
          return turn*times+stoneDivision(x,s,pos,1,n/x*times);
}

int main()
{   int cases;
    cin>>cases;
    for(int j=1;j<=cases;j++){
    long long n;
    cin>>n;
    long long s;
    cin>>s;
    vector<long long> x(s);
    for(long long i=0;i<s;i++){
        cin>>x[i];
        if(x[i]>n){
            x[i]=0;
        }
    }
    sort(x.begin(),x.end());
    long long result=stoneDivision(n,x,s-1);
    cout<<result<<endl;
}
}
