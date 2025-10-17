#include<bits/stdc++.h>
using namespace std;
class Stack {
// private:
//     int top, arr[100];

public:
    int top;
    Stack() : top(-1) {}
    int arr[100];
    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 99;
    }

    void push(int x) {
        if (!isFull()) arr[++top] = x;
    }

    int pop() {
        if (!isEmpty()) return arr[top--];
        return -1;
    }

    int peek() {
        return (isEmpty()) ? -1 : arr[top];
    }
};
int main() {
    Stack s;
     int n;
     cin >> n;
     int i,x;
     for(i=0;i<n;i++)
     {
        cin >> x;
        s.push(x);
     }
     
    for(i=0;i<n;i++)
    {
        cout<< s.arr[i] << endl;
    }
    cout << "Top element: " << s.peek() << endl; 

    cout << "Popped element: " << s.pop() << endl; 

    cout << "Top element after pop: " << s.peek() << endl;

    cout << "Is stack empty " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}