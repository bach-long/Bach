#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
    int a[n][n];
	int c=1;
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		a[i][j]=0;
	}
}

int i=0;
int j=n/2;
while(c<=n*n){
	a[i][j]=c;
	if(a[(i+2*n-1)%n][(j+1)%n]==0){
		i=(i+2*n-1)%n;
		j=(j+1)%n;
	}
	else{
		i=(i+1)%n;
		j=j;
	}
	c++;
}
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        swap(a[i][j],a[j][i]);
    }
}
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<a[i][j]<<" ";
	}
	cout<<endl;
}
}
