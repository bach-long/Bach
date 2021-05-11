#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d", &a,&b);
	int n=a*b;
	for(int i=2; i<=n; i++){
			if(n%i==0){
		    n/=i;}
		
		if(n%a!=0 || n%b!=0){
			printf("%d", n*i);
			break;
			
		}
		
	}
}
