#include <iostream>
#include <string>

int main ()
{
	using namespace std;
	int rows, columns;
	
	cout<<"Enter number of row/s " << endl;
	 cin >>rows;
	cout<<"Enter number of column/s " << endl;
	 cin >>columns;
	
	for (int y=1; y <= columns; y++)
	
	{
	
    for (int y=1; y <= rows; y++)
    
	{
    	cout<<"*";
	}

	cout<<endl;
}
	return 0;
}
