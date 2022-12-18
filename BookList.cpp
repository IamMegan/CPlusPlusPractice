
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <map>
#include <utility>
using namespace std;

//insertBook(Book):void
//getBook(string):Book
//remove(string):Book
//writeToFile(string):bool
//ReadToFIle():file
//toString();





class BookList{
  private:

    typedef struct Book{
    string Title,Author,ISBN;
    bool isRead, inProgress;
    }Book;

  map<string,Book> Books;
    
    string toString(Book book){
        return book.Title + "\n" + book.Author + "\n" + btos(book.isRead) + "\n" + btos(book.inProgress) + "\n" + book.ISBN + "\n\n"; 
    }

    string btos(bool b){
        if(b) return "True";
        return "False";
    }
    
    public: 

    void insertBook(Book book){
        Books.insert({book.Title, book});
    }

    Book getBook(string title){
        return Books[title];
    }

    Book remove(string title){
        Book b = Books[title];
        Books.erase(title);
        return b;
    }
      
    void WriteToFile(string name){
        ofstream readingList(name);
        for(map<string,Book>::iterator it = Books.begin(); it != Books.end(); ++it){
            readingList << toString(it->second); 
        }
        readingList.close();
    }

    void ReadFromFIle(string name){
        ofstream readingList(name);
        

    }

    Book constructBook(string Title, string Author, string ISBN, string isRead, string inProgress){
        Book b;
        b.Title = Title;
        b.Author = Author;
        b.ISBN = ISBN;
        if(isRead.compare("True")) b.isRead = true;
            b.isRead = false;
        if(inProgress.compare("True")) b.inProgress = true;
            b.isRead = false;

        return b;
    }

    
    
  };
  
