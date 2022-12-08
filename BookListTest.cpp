#include <iostream>
#include "BookList.cpp"
using namespace std;


int main(int argc, char *argv[]){
    BookList b;
    string Title, Author, isRead, inProgress, fileName;
    cout << "Enter some books in the order of Title, Author, Whether you have read it or not, and whether you have started it or not: ";
    cin >> Title;
    cout << endl;
    cin >> Author;
    cout << endl;
    cin >> isRead;
    cout << endl;
    cin >> inProgress;
    cout << endl;

    b.constructBook(Title, Author, isRead, inProgress);
    cout << "Enter a file name: ";
    cin >> fileName;
    b.WriteToFile(fileName);

}