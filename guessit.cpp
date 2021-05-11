#include<bits/stdc++.h>
#include<cstdlib>
#include<ctime>
using namespace std;
int numberGetIn(){
    int a;
    cin>>a;
    return a;
}
void printAnswer(int &guess, int &numberSelected){
    if(guess>numberSelected)
        cout<<guess<<" "<<"It's too big, try again"<<endl;
    else if(guess<numberSelected)
        cout<<guess<<" "<<"It's too small, try again"<<endl;
}
int randomNumber(){
    srand(time(0));
    int n=rand()% 1000+1;
    return n;
}

int main(){
  int numberSelected=randomNumber();
  int guess;
  do{
    guess=numberGetIn();
    printAnswer(guess,numberSelected);
  }
    while(guess!=numberSelected);
  if(guess==numberSelected)
    cout<<"Congratulations";

}

