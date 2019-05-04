#include <iostream>
#include <conio.h>

using namespace std;
int main()	
{ 
	int gallons1, gallons2,utangamount;
	char utang,N,n,Y,y;
cout << "Input recent water meter reading in gallons" << endl;
cin >> gallons1 ;
cout << "Input previous month's water meter reading in gallons" << endl;
cin >> gallons2 ;
cout << "Do you have any unpaid balance? Y/N" << endl;
	cin >>utang;
	
	if (utang=='N' || utang=='n')
	{
	cout << 35+ (1.1*(gallons1+gallons2));}
	else if (utang=='Y' || utang=='y')
	{
	cout << "How much is the unpaid balance?" << endl; 
	cin>>utangamount;
	cout << utangamount + 20 + 35+ (1.1*(gallons1+gallons2));
	
}

		_getch;
	return 0; 


}
