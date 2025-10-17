#include <iostream> 
using namespace std; 
class Employee { 
private: 
    int id; 
    string name; 
public: 
    void setData(int id, string name) { 
        // Here local variables shadow the class members 
        this->id = id;      
        this->name = name;  
    } 
        void display() { 
        cout << "Employee ID: " << id << endl; 
        cout << "Employee Name: " << name << endl; 
    } 
}; 
int main() { 
    Employee e1; 
    e1.setData(101, "Robert"); 
    e1.display(); 
    return 0; 
}
