#include <iostream>

int main()

{
	using namespace std;
    int number;

    cout << "Enter an integer" <<endl;
    cin >> number;

    for (int i = 1; i <= 10; ++i)
	 {
        cout << number << " * " << i << " = " << number * i << endl;
   	 }
    
    return 0;
}
