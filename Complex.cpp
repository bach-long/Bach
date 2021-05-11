#include<bits/stdc++.h>
using namespace std;
struct Complex {
    // your code goes here
    // Cac bien thanh vien
    // your code goes here
    // Hai ham khoi tao
    int a;
    int b;
    Complex(){};
    Complex(int a,int b){
        this->a=a;
        this->b=b;
    }
    double abs() {
        return sqrt(pow(a,2)+pow(b,2))*1.0;
    }

    void print() {
        if(a==0&&b==0){
            cout<<0<<endl;
        }
        else{
            if(a==0){
                if(b<0){
                if(b==-1)
                cout<<"-"<<"i"<<endl;
                else
                cout<<'-'<<b*-1<<"i"<<endl;
                }
                else if(b>0){
                   if(b==1)
                   cout<<"i"<<endl;
                    else
                    cout<<b<<"i"<<endl;}
            }
            else if(b==0){
                cout<<a<<endl;
            }
            else{
                if(b<0){
                if(b==-1)
                cout<<a<<"-"<<"i"<<endl;
                else
                cout<<a<<'-'<<b*-1<<"i"<<endl;}
                else if(b>0){
                    if(b==1)
                    cout<<a<<"+"<<"i"<<endl;
                    else
                    cout<<a<<"+"<<b<<"i"<<endl;}
            }
        }
    }
};

Complex add(Complex x, Complex y) {
    int m=x.a+y.a;
    int n=x.b+y.b;
    Complex z(m,n);
    return z;
}




int main(){
    int n;
     cin>>n;
     int odd=0;
     int sum=0;
     vector<int> a(n+1);
     for(int i=0;i<=n;i++){
         cin>>a[i];
     }
      sort(a.begin(),a.end());
     for(int i=0;i<=n;i++){
         if(a[i]%2==0)
         sum+=a[i];
         else
         odd++;
     }
     cout<<a[0]<<endl;
     cout<<a[n]<<endl;
     cout<<sum<<endl;
     cout<<odd;
}
