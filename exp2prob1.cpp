#include <iostream>
#include <conio.h>

using namespace std;
int main()	
{
	int hours;
	char package;
	

	cout << "Which package did you purchase? Choose from A, B, and C." << endl;
	cin >> package;
	cout << "You have purchased package " << package <<endl;
	cout <<"Enter how many hours used" <<endl;
		cin >> hours;
	
	if (package=='A' || package=='a')
	{
	 if (hours>10)
		{
		cout << "Your monthly bill is " << 995 + ((hours-10)*20) << " pesos";
		}
		else 
		{
		cout << "Your monthly bill is 995 pesos" <<endl;
		}
	}
	
	
	else if (package=='b' || package=='B')
	{
	 if (hours>20)
		{
		cout << "Your monthly bill is " << 1495 + ((hours-20)*10);
		}
		else
	{
			cout << "Your monthly bill is 1495 pesos" <<endl;
		}
			}
	if (package=='C' || package=='c')
	{
			cout << "Your monthly bill is 1995 pesos" <<endl;
		}
	
	
	_getch;
	return 0; 

}
