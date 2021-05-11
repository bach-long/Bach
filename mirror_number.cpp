#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> total;
	int n;
	cin>>n;
	int num=1;
	while(num<=n){
	int sum=0;
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		int c=i;
		bool check;
		vector<int> s;
		if(i>=10){
		while(i!=0){
			s.push_back(i%10);
			i/=10;
		}
		i=c;}
		else if(i<10)
		s.push_back(i);
		for(int j=0;j<s.size();j++){
			if(s[j]!=s[s.size()-j-1]){
				check=false;
				break;
			}
			else 
			check=true;
		}
		if(check==true)
		sum++;
		
	}
	total.push_back(sum);
	num++;
}
for(int i=0;i<total.size();i++){
	cout<<total[i]<<endl;
}
}
