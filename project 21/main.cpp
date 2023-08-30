#include <iostream>
#include <cstring>

using namespace std;

class Contact {
public:
    string name;
    string phoneNumber;
    string emailAddress;
};

bool caseInsensitiveCompare(const string &str1, const string &str2) {
    if (str1.length() != str2.length())
        return false;
}
    

int main() {
	string name;
    string phoneNumber;
    string emailAddress;
		
    int choice;
    int total =10;
    int saved_total =4;
  
    
    Contact contacts[total];
   
    contacts[0] = { "Juctice", "0248960473", "juctice@gmail.com" };
    contacts[1] = { "Dr. Appiahene", "0504610326", "boss@gmail.com" };
    contacts[2] = { "Uncle  Joe", "0247415264", "Joe3@gmail.com" };
    contacts[3] = { "Gyasi Seeker", "0503837744", "Lot@gmail.com" };
    contacts[4] = { "ecodeCEO", "0557196527", "ecodeLabs@gmail.com" };
start:   
    cout << "Welcome to Phonebook Application" << endl;
    cout << "1. Add a Contact" << endl;
    cout << "2. Search Contact" << endl;
    cout << "3. View All Contacts" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter Your choice : ";
    cin >> choice;
   
    if(choice==1) {
            	
        	saved_total+=1;
            cin.ignore();
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter phone number: ";
            getline(cin, phoneNumber);
            cout << "Enter email address: ";
            getline(cin, emailAddress);
           
            contacts[saved_total] = { name, phoneNumber, emailAddress };
            cout << "Contact Added Successfully!" << endl;
            cout << "Name: " << contacts[saved_total].name << endl;
            cout << "Phone Number: " << contacts[saved_total].phoneNumber << endl;
            cout << "Email Address: " << contacts[saved_total].emailAddress << endl;
            goto start;
            
    }else if(choice ==2){
	
        	
           cin.ignore();
                cout << "Enter search term: ";
                string searchTerm;
                getline(cin, searchTerm);
                
                // Search contacts
                bool found = false;
                for (int i = 0; i <= saved_total; i++) {
                    if (contacts[i].name == searchTerm ||
                        contacts[i].phoneNumber == searchTerm ||
                        contacts[i].emailAddress == searchTerm) {
                        cout << "Name: " << contacts[i].name << endl;
                        cout << "Phone Number: " << contacts[i].phoneNumber << endl;
                        cout << "Email Address: " << contacts[i].emailAddress << endl;
                        cout << endl;
                        found = true;
                    }
                }
                if (!found) {
                    cout << "No matching contacts found." << endl;
                    goto start;
                }
            
      }else if(choice == 3){
	  
         
            for (int i=0;i<=saved_total;i++) {
                if (!contacts[i].name.empty()) {
                    cout << "Name: " << contacts[i].name << endl;
                    cout << "Phone Number: " <<contacts[i].phoneNumber << endl;
                    cout << "Email Address: " <<contacts[i].emailAddress << endl;
                    cout << endl;
                }
            }
            goto start;
}else if(choice == 4){
            cout << "Exiting Phonebook Application.  Visit again!";
            return 0;        
           
    	}else{
		
            cout << "Invalid choice!" << endl;            
            
    }
   
    return 0;
}
