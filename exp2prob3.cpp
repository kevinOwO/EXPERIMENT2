#include <iostream>
#include <conio.h>
#include<cmath>
#include<iomanip>
using namespace std;
int main()	
{ int x,y;
double z=2.5; 
cout<< "Enter value of x " << endl;
cin >>x;
cout<< "Enter value of y "<< endl;
cin>>y;

 switch (x)
 {
    case 1: 
        if (x = 1 && y>1 && y<5)
        cout<< setprecision (2)<< x*y*z;
    else if (x = 1 && y>= 5)
        cout<< setprecision(2)<< x +(y/z);
    break;
        
        case 2: 
        if (x = 2 && y<= 5)
        cout << setprecision (2) <<abs((x-y)/z);
        else if (x = 2 && y> 5)
        cout << setprecision (2) << x- sqrt(y+z);
        break;
        default: cout << x+y+z;
    }


_getch;
		return 0;
		
		}
