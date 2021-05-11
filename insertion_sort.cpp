#include<bits/stdc++.h>
using namespace std;
int runningTime(vector<int> arr) {
    int n=0;
for(int i=1;i<arr.size();i++){
    int save=i;
    int pst=i-1;
    while(arr[save]<arr[pst]){
        swap(arr[save],arr[pst]);
        save--;
        pst--;
        n++;
    }
}
   return n;

}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int a=runningTime(arr);
cout<< a;
}
