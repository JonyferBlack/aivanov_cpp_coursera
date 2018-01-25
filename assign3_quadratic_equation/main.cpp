#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, c ,D;

    cin>>a>>b>>c;

    if (a == 0)
    {
      if (b != 0){
    	  if (c == 0) cout<<0<<endl;
    	  else cout << (-1*c)/b<<endl;
      }
      return 0;
    }

    D = b*b-4*a*c;

    if(D>0){
    	cout<<(-1*b+sqrt(D))/(2*a)<<" ";
    	cout<<(-1*b-sqrt(D))/(2*a)<<endl;
    	return 0;
    }

    if(D==0) cout<<(-1*b+sqrt(D))/(2*a)<<endl;

	return 0;
}
