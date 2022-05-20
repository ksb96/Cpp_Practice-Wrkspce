#include<iostream>
using namespace std;
class Book{
public:
	string title;
	string author;
	int pages;
	//constructor
	Book(string aTitle, string aAuthor, int aPages){
	title = aTitle;
	author = aAuthor;
	pages = aPages;
	}
	//object function
	bool longBook(){
	if(pages> 500){
	return true;}
	return false;	
}
};
int main()
{
  Book book1("harry potter", "JK rowling", 500); 
  Book book2("xyz", "JK", 900);	

cout<<book1.longBook();
return 0;
}
