#ifndef BOOK
#define BOOK
#include <iostream>

class Book{
    private:
string title;
string author;
string isbn;
public:
~Book(){
    cout <<"Destroying book: Sample Ttile"<<endl;
}
Book(string title,string author,string isbn):title(title),author(author),isbn(isbn){}
string getTitle(){
    return title;
}
string getAuthor(){
    return author;
}
string getIsbn(){
    return isbn;
}

};
#endif 