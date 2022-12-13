
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





class WebList{
  private:

    typedef struct Website{
    string URL, Name, Author, WebsiteName;
    }Website;

  map<string,Website> Sites;
    
    string toString(Website website){
        return website.URL + "\n" + website.Name + "\n" + website.Author + "\n" + website.WebsiteName + "\n\n"; 
    }

    string btos(bool b){
        if(b) return "True";
        return "False";
    }
    
    public: 

    void insertSite(Website website){
        Sites.insert({website.URL, website});
    }

    Website getSite(string URL){
        return Sites[URL];
    }

    Website getSitesByName(string name){

    }

    Website remove(string URL){
        Website w = Sites[URL];
        Sites.erase(URL);
        return w;
    }
      
    void WriteToFile(string name){
        ofstream siteList(name);
        for(map<string,Website>::iterator it = Sites.begin(); it != Sites.end(); ++it){
            siteList << toString(it->second); 
        }
        siteList.close();
    }

    void ReadFromFIle(){
        ofstream readingList("ReadingList.txt");
        

    }

    Website constructSite(string URL, string Name, string Author, string WebsiteName){
        Website w;
        w.URL = URL;
        w.Name = Name;
        w.Author = Author;
        w.WebsiteName = WebsiteName;

        return w;
    }

    
    
  };
  
