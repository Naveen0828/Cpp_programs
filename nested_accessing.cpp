#include <iostream>
using namespace std;

class container{
public: 
    static int staticvalue;
    
    class nested{
    public: 
        void print(){
            cout << "Accessing outer static value: " << container::staticvalue << endl;
        }
    };
};

int container::staticvalue = 50;

int main()
{
    container::nested n;
    n.print();
    return 0;
}