#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int s;
        cin>>s;
        int a[s];
        for(int j=0;j<s;j++){
            cin>>a[j];
        }
        bool check=false;
        for(int j=0;j<s;j++){
            int l=0;
            int r=0;
            for(int k=j+1;k<s;k++){
                r+=a[k];
            }
            for(int k=j-1;k>=0;k--){
                l+=a[k];
            }
            if(l==r){
                check=true;
                break;
            }
        }
        if (check==true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
