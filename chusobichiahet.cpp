#include<bits/stdc++.h>
using namespace std;
int main(){
    double a;
    cin>>a;
    vector<double> x;
    x.push_back(a);
    while(a>=0){
        if(a>10){
        while(a>10){
        cin>>a;}
        x.push_back(a);
        }
        else{
        cin>>a;
        x.push_back(a);
        }
    }
    int size=x.size();
    double sum=0;
    double n=0;
    for(int i=0;i<x.size();i++){
        if(x[i]>=0&&x[i]<=10){
            n++;
            sum+=x[i];
        }
    }
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    cout<<fixed<<setprecision(2)<<sum/n;
}
