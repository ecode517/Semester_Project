#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
using namespace std;

class Book {
private:
char book_id[10];
char book_name[50];
char author_name[50];
char publisher[50];
int quantity;
float price;
public:
void add_book();
void display_book();
void modify_book();
void delete_book();
char* get_book_id();
};

void Book::add_book() {
cout<< " \nEnter Book ID: ";
cin>>book_id;
cout<< " \nEnter Book Name: ";
cin.ignore();
cin.getline(book_name,50);
cout<< " \nEnter Auther Name: ";
cin.getline(author_name,50);
cout<< " \nEnter Publisher Name: ";
cin.getline(publisher,50);
cout<< " \nEnter Quantity: ";
cin>>quantity;
cout<< " \nEnter Price: ";
cin>>price;
system("cls");
cout<< " \n\n Book Added Successfully! ";
}

void Book::display_book() {
cout<<" \n\n "<<setw(10)<<book_id<<setw(20)<<book_name<<setw(20)<<author_name<<setw(20)<<publisher<<setw(10)<<quantity<<setw(10)<<price;
}

void Book::modify_book() {
system("cls");
cout<< " \nEnter New Book Name: ";
cin.ignore();
cin.getline(book_name,50);
cout<< " \nEnter New Author Name: ";
cin.getline(author_name,50);
cout<< " \nModify Publisher's Name: ";
cin.getline(publisher,50);
cout<< " \nUpdate New Quantity: ";
cin>>quantity;
cout<< " \nChange Price: ";
cin>>price;
cout<< " \nBook Modified Successfully! ";
}

void Book::delete_book() {
quantity = 0;
cout<< " \nBook Delete Successfully! ";
}

char* Book::get_book_id() {
return book_id;
}

int main() {

Book b;
fstream file;
int choice;
char book_id[10];
//creating a dat file to store our data in shelf , the file name is ecode.dat .
file.open(" ecode.dat ", ios::in | ios::out | ios::binary | ios::app);


while(true) {
cout<< " \n\n=========  Library Management System ====\n ";
cout<< "1. Add Book To Shelf\n";
cout<< "2.Display All Books In Shelf\n";
cout<< "3.Remove a Book\n";
cout<< "4.Quit\n";
cout<< "       Select: ";
cin>>choice;

//add books with the addBook function
switch(choice) {
case 1:
b.add_book();
file.write((char*)&b,sizeof(b));
break;


case 2:
file.seekg(0,ios::beg);
system("cls");
cout<<"\n===================== Available books in ecodeShelf ===\n";
cout<<" \n "<<setw(10)<<"Book ID"<<setw(20)<<"Book Name"<<setw(20)<<"Author Name"<<setw(20)<<"publisher"<<setw(10)<<"Quantity"<<setw(10)<<"Price";
while(file.read((char*)&b,sizeof(b))) {
b.display_book();
}
  break;

 
  case 3:
  cout<< " \nEnter Book ID to Delete: ";
  cin>>book_id;
  file.seekg(0,ios::beg);
  while(file.read((char*)&b,sizeof(b))) {
  if(strcmp(b.get_book_id(),book_id)==0) {
  b.delete_book();
  int pos = -1*sizeof(b);
  file.seekp(pos,ios::cur);
  file.write((char*)&b,sizeof(b));
  break;
  }
  cout<<book_id<<" ID Book deletion complete";
  }
  break;
 
  case 4:
  	system("cls");
  	cout<<"\n\n ====== Visit our Library Again ===== \n\n\n";
  file.close();
  exit(0);
  
  default:
  	system("cls");
  cout<< choice<<" is  ======= Invalid Choice! ========";
}
}



return 0;
}


