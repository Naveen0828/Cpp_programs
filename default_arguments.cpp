#include <iostream> 
using namespace std; 
int power(int base, int exp = 2) {  // default exponent is 2 
    int result = 1; 
    for (int i = 0; i < exp; i++) { 
        result *= base; 
    } 
    return result; 
} 
    int main() { 
    cout << "5 raised to 2 (default) = " << power(5) << endl; 
    cout << "5 raised to 3 = " << power(5, 3) << endl; 
    return 0; 
}
