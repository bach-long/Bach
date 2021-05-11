#include<bits/stdc++.h>
using namespace std;

struct Rectangle {
    // your code goes here
    // Cac bien thanh vien
    // your code goes here
    // Hai ham khoi tao
    int height;
    int length;
    Rectangle(){};
    Rectangle(int a,int b){
        height=a;
        length=b;
    }
    int getPerimeter() {
        // your code goes here
        return (height+length)*2;
    }

    void print() {
        // your code goes here
        for(int i=1;i<=height;i++){
            for(int j=1;j<=length;j++){
                if(i==1||j==1||i==height||j==length){
                    cout<<"*";
                }
                else
                cout<<" ";
            }
            cout<<endl;
        }
    }
};

int compare(Rectangle a, Rectangle b) {
    // your code goes here
    int m=a.getPerimeter();
    int n=b.getPerimeter();
    if(m<n){
        return -1;
    }
    else if(m==n)
    return 0;
    else
    return 1;
}
int main(){
Rectangle a(2, 5), b(3, 4);
cout << a.getPerimeter() << " " << b.getPerimeter() << endl;
cout << compare(a, b);
}
