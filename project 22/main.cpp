#include <iostream>
using namespace std;
class users{
	public:
		string name,password;
};

int main() {
	int option,number_of_users;
	number_of_users = 5;
	
	users credentials[number_of_users]; 
	string password,reset,name;
	
	credentials[0]={"ecode","password@ecode"};
	credentials[1]={"Watson","password@watson"};
	credentials[2]={"Yeboah","!@password12345"};
	credentials[3]={"user4","password@user4"};
	credentials[4]={"Justice","AJ@password"};
start:	
	cout<<"\n\n------------------  Hack517 Password Protect  --------------------\n\n"
	"\n.1. Show available users"
	"\n.2. Login account"
	"\n.3. Reset password"
	"\n.4. Quit\n      select : ";
		cin>>option;
	if(option==1){
		cout<<"\n\n---------------<< AVAILABLE USRS >>----------------\n\n";
		for(int i=1;i<=number_of_users;i++){
			cout<<i<<". "<<credentials[i-1].name<<endl;
		}
		cout<<"Do you want to Login??"
		"\n\n	1. Yes\n\n"
		"\n\n	2. No\n\n Select : ";
		cin>>option;
		if(option==1){
			goto login;
		}else{
			system("cls");
			goto start;
		}
	}else if(option==2){
		login:
			cout<<"--------------------Login\n\n"
			"Enter account name : ";
			cin>>name;
			cout<<"Enter password :";
			cin>>password;
			for(int i=0;i<=number_of_users;i++){
				if(password==credentials[i].password && name == credentials[i].name){
					system("cls");
					cout<<"\n\n\n\-----------NAME-----------PASSWORD-------------------\n"
					"Login Accessd : "<<name<<"      "<<password;
					"\n---------------------------------------------\n"
					"\n-------------------ecodeLabs-----------------\n"
					"\n---------------------------------------------\n";
					goto start;
					
				}else{
					cout<<"Invalid Username or Password\a\a\a\a!!";
					goto start;
				}
			}
	}else if(option==3){
		cout<<"\n\n----------------RESET PASSWORD-------------\n\n"
			"Enter account name : ";
			cin>>name;
			cout<<"Enter Old password :";
			cin>>password;
			for(int i=0;i<=number_of_users;i++){
				if(password==credentials[i].password && name == credentials[i].name){
					system("cls");
					cout<<"\n\n\n\-----------------------------NAME-----------PASSWORD-------------------\n"
					"Account is ready for change : "<<name<<"      "<<password;
					cout<<"\nEnter reset password :";
						cin>>reset;
						for(int i=0;i<=number_of_users;i++){
							if(name==credentials[i].name){
								credentials[i].password=reset;
							}
						}
					"\n---------------------------------------------\n"
					"\n-------------------ecodeLabs-----------------\n"
					"\n---------------------------------------------\n";
				}else{
					cout<<"Invalid Username or Password\a\a\a\a!!";
					goto start;
				}
			}
	}else if(option==4){
		system("cls");
		cout<<"\n\n\n\n\n\n\---------------Thanks for supporting ecodeLabs\n\n\n\n\n\a";
		return 0;
	}else{
		cout<<"\n\nIntruders are not allowed to use this software... Develop the habbit of reading\a\a\n";
		goto start;
	}
	
	
	
	
	
	return 0;
}
