#include<iostream>
using namespace std;
#include<math.h>

int main()
{
	int a,b,c,d,x;
	double r1,r2;
	
	cout << "Enter a,b,c: ";
	cin >> a >> b >> c;
	d = b*b-4*a*c;
	
	if(d == 0)
	x = 1;
	else if(d >= 0)
	x = 2;
	else
	x = 3;
	
	switch(x)
	{
		case 1:
			cout << "Root are real and equal" << endl;
			r1 = r2 = -b / (2.0*a);
			cout << "Root 1 = " << r1 << "\t" << "Root 2 =" << r2 << endl;
			break;
		
		case 2: 
		cout << "Root are real  and distinct " << endl;
		r1 = (-b + sqrt(d)) / (2.0*a);
		r1 = (-b - sqrt(d)) / (2.0*a);
		cout  << "Root 1 = " << r1 << "\t" << "Root 2 = " << r2 << endl;
		break;
		
		case 3:
		cout << "Roots are imaginary" << endl;
		r1 = -b / (2.0*a);
		r2 = sqrt(abs(d)) / (2.0*a);
		cout << "Root 1 = " << r1 << "+" << r2 << "i" << "\t";
		cout << "Root 2 = " << r1 << "-" << r2 << "i" << endl;
		break;
		
		default:
			cout << "Invaild choice, Please enter the number from 1 to 3..." << endl;
	}
	
	return 0;
}
