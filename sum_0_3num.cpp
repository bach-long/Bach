#include<bits/stdc++.h>
using namespace std;
vector<int> save;
int sum(vector<int> a){
    int total=0;
   for(int i=0;i<a.size();i++){
    total+=a[i];
   }
   return total;
}
void check_sum(vector<int> a_sorted,int x=0,int stt=1){
    if(stt>3){
        int total=sum(save);
        if(total==0){
              vector<int> result={save.begin(),save.end()};
              sort(result.begin(),result.end());
            for(int i=0;i<3;i++){
                cout<<result[i]<<" ";
            }
            cout<<endl;
        }
        else
            return ;
    }
    else{

   for(int i=x;i<a_sorted.size();i++){
    save.push_back(a_sorted[i]);
    check_sum(a_sorted,i+1,stt+1);
    save.pop_back();
   }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sort(a.begin(),a.end());
    check_sum(a);
}
