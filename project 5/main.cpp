#include <iostream>
using namespace std;

int main() {
	int option;
	string user_name,password,key;
	bool created;
	
start:
	cout<<"     Welcome To Your Page     "
	"\n\n 1. Login"
	"\n 2. Create Account"
	"\n       Select : ";
	cin>>option;
switch(option){
	case 1:
		system("cls");
		if(created){
		
		cout<<"=========== LOGIN \n\n"
		"Name : "<<user_name;
		while(key!=password){
			cout<<"Enter password : ";
			cin>>key;
			if(key!=password){
				cout<<"Wrong Password!";
				
			}else{
				cout<<"========= Successful LogoIn \n"
				"Name :"<<user_name<<
				"\n Password :"<<key;
				
			}
			
		}
		
		
	}else{
		cout<<"=========== You have no accout !!";
		goto start;
	}
		
	break;
	case 2:
		create:
	    cout<<"=========== Create accout \n\n"
	    "Name : ";cin>>user_name;
	    cout<<"\n   Password : ";cin>>password;
	    if(password!="" || user_name!=""){
	    	cout<<"Account Created";
	    	created = true;
		}else{
			cout<<"    Fill all filds ==========";
			goto create;
		}
	    goto start;
	    
	break;
	case 3:
		system("cls");
		cout<<"\n\n\n     Visit Our ecodePage again :) ";
		return 0;
	break;
}
	
	return 0;
}
