#include <iostream>
using namespace std;

class Book{
    public:
        string author,title;
        int price;
        bool stockStatus;
        Book():author(""),title(""), price(0), stockStatus(0) {}
        Book(string bookAuthor, string bookTitle, int bookPrice, bool bookStockStatus=1): 
            author(bookAuthor),title(bookTitle), price(bookPrice), stockStatus(bookStockStatus){}
};
class BookStore{
    private:
        Book books[5];
    public:
        BookStore(Book bookList[5]){
            for(int index=0; index<5; index++){
                books[index]=bookList[index];
            }
        }
        Book bookSearch(string title, string author){
            Book book;
            for(int index=0; index<5; index++){
                if(title==books[index].title && author == books[index].author){
                    book=books[index];
                    break;
                }
            }
            return book;
        }
        int printInvoice(Book book, int quantity){
            return book.price*quantity;
        }
};
int main(){
    Book books[5]={
                    Book("Abdullah", "Sega The Master", 500),
                    Book("Haman", "Master of None", 200),
                    Book("Naveed Jafar", "Conceptual Methametics", 800),
                    Book("Zafeer", "Vex The Smart Guy", 100, 0), // Stock Not available
                    Book("Uncle Bob", "Clean Code", 1200, 1)
                    };
    BookStore s1(books);
    Book book = s1.bookSearch("Sega The Master", "Abdullah");    // It returns a book

    cout << "Book Author: " << book.author << endl;
    cout << "Book Name: " << book.title << endl;
    cout << "Book Price: " << book.price << endl;
    cout << "Book Available: " << book.stockStatus << endl;
    cout << "Calculate: "<< s1.printInvoice(book, 50);

    return 0;
}