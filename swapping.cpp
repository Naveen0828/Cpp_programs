#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout << " enter 2 numbers: ";
	cin >> a >> b;
	cout << "Before swap: " << a << " " << b << endl;
	c = a;
	a = b;
	b = c;
	
	cout << "After swap: " << a << " " << b;
	
	return 0;
}
