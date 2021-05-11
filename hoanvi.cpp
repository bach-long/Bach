#include<iostream>
using namespace std;
void hoanvi(string& s,int high,int low=0){
   if(low==high){
    cout<<s<<endl;
    return;
   }
   for(int i=low;i<high;i++){
    swap(s[low],s[i]);
    hoanvi(s,high,low+1);
    swap(s[low],s[i]);
   }
}
int main(){
	string s;
	cin>>s;
	hoanvi(s,s.size());
}
