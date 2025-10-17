#include <iostream>
using namespace std;
#include <string.h>

enum gender
{
	FEMALE, MALE
};

int main()
{
	int rollno;
	char name[10];
	enum gender g;
	
	rollno = 1;
	strcpy(name, "NAVEEN");
	g = MALE;
	
	cout << "Roll no = " << rollno << "\t"
		<< "Name = " << name << "\t"
		<< "Gender = " << (g ? "MALE" : "FEMALE") << endl;
		
	return 0;
}
