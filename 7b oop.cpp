#include <iostream>
using namespace std;
class Book {

    static int count; 
    static int nextBookID; 
    int bookID; 
    string title;

public:
    
    Book(const string& bookTitle) : title(bookTitle) {
        count++; 
        bookID = nextBookID++; 
    }

    static int getCount()
	 {
        return count;
    }

    int getBookID() const {
        return bookID;
    }
    
    void display() const
	 {
        cout << "Book ID: " << bookID << "Title: " << title << endl;
    }
};

int Book::count = 0;
int Book::nextBookID = 1;

int main() {
    Book book1("C++ Programming");
    Book book2("Data Structures");
    Book book3("Algorithms");

    book1.display();
    book2.display();
    book3.display();

    cout << "Total books created: " << Book::getCount() << endl;

    return 0;
}

