/*
Q3. Let us work on the menu of a library. Create a structure containing book information
like accession number, name of author, book title and flag to know whether book is issued
or not.
Create a menu in which the following can be done.
1 - Display book information
2 - Add a new book
3 - Display all the books in the library of a particular author
4 - Display the number of books of a particular title
5 - Display the total number of books in the library
6 - Issue a book
(If we issue a book, then its number gets decreased by 1 and if we add a book, its number
gets increased by 1)
*/
#include <iostream>
using namespace std;

// For using it in a function's argument as flag.
#define AUTHOR 1
#define TITLE 2

// Book Structure
struct Book{    
    string author_name;
    string book_name;
    bool is_issued;
    // Default value is 0 to avoid unnecessory iteration
    // while working with its array.
    int accession_number=0;
};
// Function Prototype
void display_menu();
void display_info(Book books[]);
int find_book(Book books[], int filter);
void add_new(Book books[]);
void issue_book(Book books[]);
int count_by_title(Book books[]);
void add_demo_books(Book books[]);
int book_counter(Book books[]);

int main(){
    // Our Library can store 1000 books
    Book books[1000];
    int user_choice;
    // This will add some demo books(Hard Coded)
    add_demo_books(books);

    do{
        display_menu();
        cout << "Choice: ";
        cin >> user_choice;

        switch(user_choice){
            case 1:
                display_info(books);
                break;
            case 2:
                add_new(books);
                break;
            case 3:
                find_book(books, AUTHOR);
                break;
            case 4:
                cout << "Count: " << count_by_title(books);
                break;
            case 5:
                book_counter(books);
                break;
            case 6:
                issue_book(books);
                break;
            default:
                cout << "Enter a valid choice!" << endl;
        }
    }while(user_choice!=0);
    return 0;
}
void display_menu(){
    cout << "1 - Display book information" << endl;
    cout << "2 - Add a new book" << endl;
    cout << "3 - Display all the books in the library of a particular author" << endl;
    cout << "4 - Display the number of books of a particular title" << endl;
    cout << "5 - Display the total number of books in the library" << endl;
    cout << "6 - Issue a book" << endl;
    cout << "0 - Exit" << endl;
}
void display_info(Book books[]){
    for(int i=0; i<book_counter(books); i++){
        cout << "-------------------------------------------" << endl;
        cout << "Author: " << books[i].author_name << endl;
        cout << "Book Name: " << books[i].book_name << endl;
        cout << "Issued: " << ((books[i].is_issued)?"Yes":"No") << endl;
        cout << "Accession Number: " << books[i].accession_number << endl;
    }
    cout << "-------------------------------------------" << endl;

}
// By using filters
int find_book(Book books[], int filter){
    string search_inp;
    int book_index;
    cout << "Enter " << ((filter==AUTHOR)?"Auther":"Title") << " Name: ";
    getline(cin,search_inp);

    for(int i=0; i<book_counter(books); i++){
        if(((filter==AUTHOR)?books[i].author_name:books[i].book_name)==search_inp){
            cout << "Author: " << books[i].author_name << endl;
            cout << "Book Name: " << books[i].book_name << endl;
            cout << "Issued: " << ((books[i].is_issued)?"Yes":"No") << endl;
            cout << "Accession Number: " << books[i].accession_number << endl;
            book_index = i;
        }
    }
    return book_index;
}
void add_new(Book books[]){
    int index=book_counter(books);
    cout << "Book Name: ";
    cin >> books[index].book_name;
    cout << "Author Name: ";
    cin >> books[index].author_name;
    cout << "Issued (1/0): ";
    cin >> books[index].is_issued;
    books[index].accession_number=index+1;
}
int count_by_title(Book books[]){
    string user_inp;
    cout << "Enter book title: ";
    cin >> user_inp;
    int counter=0;
    for(int i=0; i<book_counter(books); i++) if(user_inp==books[i].book_name) counter++;
    return counter;
}
void issue_book(Book books[]){
    int index = find_book(books,TITLE);
    if(books[index].accession_number!=0){
        cout << "Issue (1/0): ";
        cin >> books[index].is_issued;
        cout << "Book issued!" << endl;
    }
}
int book_counter(Book books[]){
    int counter=0;
    while(books[counter].accession_number!=0) counter++;

    return counter;
}
void add_demo_books(Book books[]){
    books[0] = {"Jon Erickson", "Art of Exploitation", 1, 1};
    books[1] = {"Justin Seitz", "Black Hat Python", 1, 2};
    books[2] = {"Ben Clark", "Rtfm: Red Team Field Manual", 1, 3};
    books[3] = {"Don Murdoch", "Blue Team Handbook", 1, 4};
}