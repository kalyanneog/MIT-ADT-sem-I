#include <iostream>
using namespace std;
class Book
{
    int bookId;
    string title;
    float price;
public:
    Book(int id, string t, float p)
    {
        bookId = id;
        title = t;
        price = p;
    }
    Book(const Book &b)
    {
        bookId = b.bookId;
        title = b.title;
        price = b.price;
    }
    void display()
    {
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
    ~Book()
    {
        cout << "Destructor called for " << title << endl;
    }
};
int main()
{
    Book b1(101, "C++ Programming", 450);
    Book b2(b1);
    cout << "--- Original Book ---" << endl;
    b1.display();
    cout << "\n--- Copied Book ---" << endl;
    b2.display();
    return 0;
}
