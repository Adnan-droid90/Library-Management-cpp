#include <iostream>
#include <vector>
using namespace std;

struct Book 
{
    string title;
    string author;
    int id;
};

vector<Book> library;

void addBook() 
{
    Book newBook;
    cout << "Enter book title: ";
    cin.ignore();
    getline(cin, newBook.title);
    cout << "Enter author name: ";
    getline(cin, newBook.author);
    newBook.id = library.size() + 1;
    library.push_back(newBook);
    cout << "Book added with ID: " << newBook.id << endl;
}

void displayBooks() {
    if (library.empty()) 
	{
        cout << "No books in the library." << endl;
        return;
    }
    cout << "\nLibrary Books:" << endl;
    for (size_t i = 0; i < library.size(); i++) {
        cout << "ID: " << library[i].id << ", Title: " << library[i].title << ", Author: " << library[i].author << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\nLibrary Management System" << endl;
        cout << "1. Add Book\n2. Display Books\n3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice, try again!" << endl;
        }
    }
    return 0;
}

