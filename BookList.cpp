
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>
#include <list>


using namespace std;



typedef struct Book{
    string Title,Author;
    bool isRead, inProgress;
}Book;

class BookList{
  
  list<Book> Books;
  
  Book getBook(string title){
     
     for(int i = 0; i < Books.size(); i++){
         if(strcmp(Books.Title, title)){ //Research STL and Iterators
             return Book;
         }
         else{
             return null;
         }
     }
      
  }
  
