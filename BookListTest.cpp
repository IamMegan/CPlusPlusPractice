#include <iostream>
#include "BookList.cpp"
using namespace std;


void clearStream();

int main(int argc, char *argv[]){
    BookList b;
    string Title, Author, ISBN, isRead, inProgress, fileName;
    char check = 'y';
    while(check == 'y'){
        cout << "Enter the title of a book: ";
        cin >> Title;
        clearStream();
        cout << "Now an Author: ";
        cin >> Author;
        clearStream();
        cout << "the ISBN number: ";
        cin >> ISBN;
        clearStream();
        cout << "Whether you have started it, True/False: ";
        cin >> inProgress;
        clearStream();
        cout << "And if you've finished it, True/False: ";
        cin >> isRead;
        clearStream();
        cout << "Do you have more books to enter? y/n: ";
        cin >> check;
        clearStream();
    }
    

    b.insertBook(b.constructBook(Title, Author, ISBN, isRead, inProgress));
    cout << "Enter a file name: ";
    cin >> fileName;
    b.WriteToFile(fileName);
  

}

void clearStream(){
    while(cin.get() != '\n');
}