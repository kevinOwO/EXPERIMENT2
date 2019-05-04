#include <iostream>
#include <conio.h>

using namespace std;
int main()	
{
	int numberuno,numberdos,number3;
		cout << "Enter first number" <<endl;
		cin >> numberuno;
		cout << "Enter second number" <<endl;
		cin >> numberdos;
		cout << "Enter third number" <<endl;
		cin >> number3;
		
		if(numberuno > numberdos && numberuno > number3)
    {
        cout << "The largest of the three numbers is " << numberuno;
   }

    if(numberdos >= numberuno && numberdos >= number3)
    {
        cout << "The largest of the three numbers is " << numberdos;
   }

    if(number3 >= numberuno && number3 > numberdos) 
	{
        cout << "The largest of the three numbers is " << number3;
}
		
		_getch;
		return 0;
		
		}
