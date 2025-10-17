#include <bits/stdc++.h>
using namespace std;

class person
{
    public: 
        string name;
        int age;
        person(string name, int age){
            cout << "Patrent called\n";
            this->name;
            this->age;
        }

};

class student : public person{
public:
    int rollnum;
    student(string name, int age, int roll) : person(name, age){
        cout << "Child is called \n";
        this->rollnum;
    }
};

int main()
{
    student s1("raj",20,123);
    cout << s1.name <<  endl;
}