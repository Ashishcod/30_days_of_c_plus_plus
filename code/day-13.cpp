#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

// Write your MyBook class here

    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    
    
class MyBook {
private:
    string title;
    string author;
    int price;

public:
    // Class Constructor
    MyBook(string title, string author, int price) {
        this->title = title;
        this->author = author;
        this->price = price;
    }

    // Function to display book details
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    
// End class

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
