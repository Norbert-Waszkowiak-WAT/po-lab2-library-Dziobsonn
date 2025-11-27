#ifdef LIBRARY
#define LIBRARY
#include <iostream>
#include "book.cpp"
class library{
private:
Book** books;
int count;
public:
library():count(0),books(nullptr){}
void addBook(Book* book){
    count++
    Book** newBooks=new book*[count];
    newBooks[count-1]=book;
for(int i=0;i<count-1;i++){
    newBooks[i]=books[i];
}
    delete[] books;
    books=newBooks;
}
void removeBook(int index){
    delete books[index] ;
    for(int i =index;i<count-1;i++){
        books[i]=books[i+1];
    }
    count--;
}
Book** getBooks(){
    return books;
}
int getCount{
    return count;
}
~Library(){
   for(int i =0; i<count;i++){
    delete books[i];
   }
    delete[] books;
    cout<<"Library destroyed"<<endl;
}
}
#endif