#include <iostream> 
using namespace std; 
class Student { 
private: 
    int rollNo;      // private 
    string name;     // private 
public: 
    void setData(int r, string n) { 
        rollNo = r; 
        name = n; 
    } 
        void display() { 
        cout << "Roll Number: " << rollNo << endl; 
        cout << "Name: " << name << endl; 
    } 
}; 
int main() {
 
    Student s1; 
    s1.rollNo = 10; 
    s1.setData(10, "Alice");  
    s1.display(); 
    return 0; 
}
