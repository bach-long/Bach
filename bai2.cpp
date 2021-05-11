#include<bits/stdc++.h>
using namespace std;
int main(){
   int x;
   cin>>x;
   switch (x){
 case 3:
    {int k;
    cin>>k;
    while(k>=3){
        k/=3;
    }
    cout<<k;
    break;}
 case 4:
    {int y= 10;
	   	for (int y = 0; y <= 9; y ++);
       	cout << y;
    break;
    }
 case 5:{
     int i=4;
     int j=9;
    if (i == j) {
  	cout << "A" << endl;
}
else if ((i % j) < 3) {
 	cout << "B" << endl;
}
else if (i < (j-1)) {
  	cout << "C" << endl;
}
else {
  	cout << "D" << endl;
}
  break;
   }
 case 6:
    {
   int x=7,y=45,z=63,min_num;
	if (x<z)
      min_num=x;
	else
      min_num=z;
	if(y<z)
      min_num=y;
	else
	   min_num=z;

   cout<<"The minimum is:" <<min_num;
   system ("pause");
   return 0;
}
 case 7:
    {
        int num = 5, sum = 0;
while (num > 0)
{
  	if (num %2 !=0)
      sum+=num;
  	--num;
}
cout << "The sum is " << sum << endl;


    }
 case 8:
    {
        int x = -1;
     	do {
	          	cout<<"Hello, world!\t";
	          	x++;
     	} while ( !x );

    }

   }
}
