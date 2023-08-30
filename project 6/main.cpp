#include <iostream>
using namespace std;


int main() {
	string name = "Nana Akofo Addo"; 
	string index = "UEB32---22";
	string course = "BSc ITDs";
	string contact = "+233-557-196-527";
	string email = "info@uenr.codes";
	int option;
	float gpa = 4.0;
	int level = 100;
	
start:	
	cout<<"1. Show Profile"
		"\n2. Change details"
		"\n3. Exit \n   select : ";
		cin>>option;
	
switch(option){
		case 1:	
			cout<<"\n\n =========== Welcome to your DataBase ====\n\n\n";
			cout<<"Name : "<<name<<
			"\n Index No :"<<index<<
			"\n Course : "<<course<<
			"\n\n Contatc : "<<contact<<
			"\nE-mail : "<<email<<
			"\nLevel : "<<level<<" GPA : "<<gpa<<
		"\n\n============================================="
		"\n============= UENR@ecodeLabs.com ============";
			
		break;
		case 2:
			
			system("cls");
			cout<<"============== Change details ==\n";
			
			cout<<"ENTER COURSE :";
			cin>>course;
			cout<<"ENTER EMAIL :";
			cin>>email; 
			cout<<"ENTER Contact";
			cin>>contact; 
			cout<<endl;
			cout<<name<<" can't be modified!\n\n GPA : "<<gpa;
			cout<<"ENTER LEVEL :";cin>>level;
		goto start;
		break;
		case 3:
			system("cls");
			cout<<"========= GOOD LUCK ==";
			return 0;
		break;
	

}	
	
	
	return 0;
}
