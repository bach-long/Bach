#include<bits/stdc++.h>
using namespace std;
//kiem tra theo cot va hang
bool threat(int a[],int n,int x,int i){
   for(int j=0;j<=x;j++){
    if(x==j){
        continue;
    }
    else{
        if(i==a[j]||abs(i-a[j])==abs(x-j))
            return true;
    }
   }
   return false;
}
//in ra ban co
void print(int a[],int n){
   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==a[i]-1){
                cout<<1<<" ";
            }
            else
                cout<<0<<" ";
        }
        cout<<endl;
       }
       cout<<endl;
}

//de qui backtracking theo cot trong tung hang
void brute(int a[],int n,int x,int& cnt){
    if(x==n){
            print(a,n);
            cnt++;
    }
    else{
    for(int i=1;i<=n;i++){
        if(threat(a,n,x,i)){
            continue;
        }
        else if(!threat(a,n,x,i)) {
            a[x]=i;
            brute(a,n,x+1,cnt);
        }
    }
  }
}

int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    int cnt=0;
    brute(a,n,0,cnt);
    cout<<cnt;
}

