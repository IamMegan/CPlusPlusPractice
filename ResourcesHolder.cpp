#include <iostream>
#include <utility>
#include "BookList.cpp"
#include "WebList.cpp"
using namespace std;

class ResourcesHolder{
    public: 
    void initBookList(BookList b){
        string name;
        cout << "Enter a file to read from: ";
        cin >> name;
        b.ReadFromFIle(name);
    }

    void initWebList(WebList w){
        string name;
        cout << "Enter a file to read from: ";
        cin >> name;
        w.ReadFromFIle(name);
    }

    int main(int argc, int *argv[]){
    BookList b;
    WebList w;
    initBookList(b);
    initWebList(w);
    }
};