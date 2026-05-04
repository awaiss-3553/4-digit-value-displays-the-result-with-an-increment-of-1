#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter 4 Digit Value: "; //n=1234
	cin>>n;
	
	int N1,N2,N3,N4,N5,N6;
	
	N1 = n%10 ; //N1=4
	N1++;
	
	N2 = n/10 ; 
	
	N3 = N2%10 ; //N3=3 
	N3++;
	
	N4 = N2/10 ;
	
	N5 = N4%10 ; //N5=2
	N5++;
	 
	N6 = N4/10 ; //N6=1
	N6++;
		
	cout<<"Result: "<<N6<<N5<<N3<<N1;

	return 0;
}
