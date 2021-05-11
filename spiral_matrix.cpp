#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a=sqrt(n);
   int i=0;
   int j=0;
   int x=a;
   int y=a-1;
   int start=1;
   int spiral[a][a];
   int sep=1;
   while(x>=0&&y>=0){
    int cnt=0;
    while(cnt<x){
        spiral[i][j]=start;
        j+=sep;
        start++;
        cnt++;
    }
    i+=sep;
    j-=sep;
    cnt=0;
    while(cnt<y){
        spiral[i][j]=start;
        i+=sep;
        start++;
        cnt++;
    }
    i-=sep;
    j-=sep;
    sep*=-1;
    x--;
    y--;
   }
   for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        cout<<spiral[i][j]<<" ";
    }
    cout<<endl;
   }
}
