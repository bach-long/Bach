#include<bits/stdc++.h>
using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
list<int> b={a.begin(),a.end()};

for(int i=1;i<=k;i++){
    list<int> :: iterator j=b.begin();
    int x=*j;
    b.pop_front();
    b.push_back(x);
}
for(int c:b){
            cout<<c<<" ";
        }
        cout<<endl;
for(int i=0;i<queries.size();i++){
    list<int> :: iterator l=b.begin();
    advance(l,queries[i]);
    queries[i]=*l;

}
return queries;
}
int main(){
int n;
cin>>n;
int k;
cin>>k;
vector<int> a(n);
for(int i=0;i<n;i++){
    a[i]=i+1;
}
int s;
cin>>s;
vector<int> query(s);
for(int i=0;i<s;i++){
    cin>>query[i];
}
vector<int> result=circularArrayRotation(a, k, query);
for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
}
}
