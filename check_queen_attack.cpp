#include<bits/stdc++.h>
using namespace std;
bool threat(vector<int> a,int x,int i){
   for(int j=0;j<x;j++){
        if(i==a[j]||abs(i-a[j])==abs(x-j))
            return true;
   }
   return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        int x;
        int y;
        cin>>x;
        cin>>y;
        if(a[x-1]!=0){
        cout<<"YES";
        return 1;
        }
        else
        a[x-1]=y;
    }
    for(int i=0;i<n;i++){
       if(threat(a,i,a[i])){
           cout<<"YES";
           return 1;
       }
       else
       continue;
    }
    cout<<"NO";
    return 0;
}
