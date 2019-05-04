#include <iostream>
using namespace std;

int main()
{int n,n1,n2,n3;
n=21;
n1=0;
n2=1;
n3=1;
    cout << "Fibonacci numbers: " <<endl;
    

    for (int i = 0; i <= n; ++i)
    {
        if(i==0)
        {
            cout  << n1 << ",";
            continue;
        }
        if( i==1)
        {
            cout << n2 << ",";
            continue;
        }
     {
		   n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3<< ",";
    }
}
    return 0;
}
