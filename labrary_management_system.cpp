#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
class Book {
public:
    int id;
    string title;
    string author;
    int availableCopies;
 
    Book(int id, string title, string author, int availableCopies) {
        this->id = id;
        this->title = title;
        this->author = author;
        this->availableCopies = availableCopies;
    }
    void DisplayBook() {
        cout << "Book ID: " << id << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Available Copies: " << availableCopies << endl;
    }
};
 
class Member {
public:
    int id;
    string name;
    string phoneNumber;
    vector<int> borrowedBooks;
 
    Member(int id, string name, string phoneNumber) {
        this->id = id;
        this->name = name;
        this->phoneNumber = phoneNumber;
    }
    void borrowBook(int bookId) {
        borrowedBooks.push_back(bookId);
    }
    void returnBook(int bookId) {
        auto it = find(borrowedBooks.begin(), borrowedBooks.end(), bookId);
        if (it != borrowedBooks.end())
            borrowedBooks.erase(it);
    }
    void displayMember() {
        cout << "Member ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Phone: " << phoneNumber << endl;
        cout << "Borrowed Books: ";
        for (int b : borrowedBooks)
            cout << b << " ";
        cout << endl;
    }
};
 
class Library {
public:
    vector<Book> books;
    vector<Member> members;
 
    void addBook(Book b) {
        books.push_back(b);
    }
    void addMember(Member m) {
        members.push_back(m);
    }
 
    void borrowBook(int memberId, int bookId) {
        bool f = 0;
        for (auto &b : books) {
            if (b.id == bookId && b.availableCopies > 0) {
                for (auto &m : members) {
                    if (m.id == memberId) {
                        m.borrowBook(bookId);
                        b.availableCopies--;
                        f = 1;
                        cout << m.name <<" borrowed " << b.title << endl;
                        return;
                    }
                }
            }
        }
        if (f == 0) cout << "Book is not available\n";
    }
 
    void returnBook(int memberId, int bookId) {
        for (auto &b : books) {
            if (b.id == bookId) {
                for (auto &m : members) {
                    if (m.id == memberId) {
                        m.returnBook(bookId);
                        b.availableCopies++;
                        cout << m.name <<" returned " << b.title << endl;
                        return;
                    }
                }
            }
        }
        cout << "Invalid return" << endl;
    }
};

int main() {
    Library lib;
    Book b1(1, "C++", "Ashok", 3);
    Book b2(2, "Python", "Guido", 2);
    lib.addBook(b1);
    lib.addBook(b2);
 
    Member m1(101, "Alice", "9969996999");
    Member m2(102, "Bob", "8887776666");
    lib.addMember(m1);
    lib.addMember(m2);
 
    lib.borrowBook(101, 1);
    lib.borrowBook(102, 2); 
    lib.returnBook(101, 1); 
}