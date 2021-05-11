#include<bits/stdc++.h>
using namespace std;
void arrange(int n,int source=1,int des=3){
   if(n==0){
    return;
   }
   arrange(n-1,source,6-source-des);
   cout<<"chuyen dia "<<n<<" tu cot "<<source<<" sang cot "<< des<<endl;
   arrange(n-1,6-source-des,des);


}
int main(){
    int n;
    cin>>n;
    arrange(4);
}
