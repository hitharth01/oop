#include <iostream>
using namespace std;

class Book {
private:
    string title;

public:
    Book(string t) : title(t) {}
    Book(const Book &b) : title(b.title) {}

    void showTitle() {
        cout << "Book Title: " << title << endl;
    }
};

int main() {
    Book book1("1984");
    Book book2 = book1; // Copy constructor
    book2.showTitle();
    return 0;
}
