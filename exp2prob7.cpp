#include <iostream>
#include <conio.h>
int main ()
{ using namespace std;
	
	int x, sum,y;

do
{
  	cout << "Enter a number: "; 
		  cin >> x;
 if (x>0)
	{
	y=0, sum=0;
  for (y = 1; y <= x; y++)
 			 {
		sum += y;		
			}
	cout << "The sum of all numbers from 1 to "<<  x << " is " <<sum <<endl;
	
	}
	 if (x<=0)
 {
 cout << "Thank You!!";
} 
}

	while (x>0);
	return 0;
}




