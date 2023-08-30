#include <iostream>

using namespace std;
int main() {
	//variables
	int option;
	float balance = 10000.00 ,amount;
	string old_pin= "1234", pin;
	string user_name =" MR. Appiahene Ecode ", new_name;
	string account_type="Savings", new_type;
	//welcome text and options
	old_acc:
	cout<<"*** Welcome ***"<<endl;
	cout<<"1. Use Account : "<<user_name<<" || type :"<<account_type<<endl;
	cout<<"2. Create new Account "
		"\n3.Help   \n     Select : "<<endl;
		//taking user option
		cin>>option;
		switch(option){
			case 1:
				
				//old account menu
				menu:
				cout<<user_name<<"\n		 Enter pin to Use account\n  		:";
				cin>>pin;
				if(pin == old_pin){
					cout<<"\n Success \n";
						cout<<
					"1. Check balance \n"
					"2. Withdraw \n"
					"3. Exit \n";
					" Select action :";cin>>option;
					  //creating menu options
					 switch(option){
					 	case 1:
						 	cout<<"Account balance is "<<balance;
							goto menu;
						break; 	
						case 2:
								cout<<"Enter amount :";cin>>amount;
								
								//checking user balance
								if(amount>balance){
									cout<<" Inssuficient amount!!";
									goto menu;
								}else{
								
								cout<<amount<<" withdrawm, current balance is "<<balance-amount;
								balance = balance-amount;
							
							}
							goto menu;
						break;
						
						case 3:
							system("cls");
							cout<<" Exit successful !!\a";
							return 0;
						break;
					 	
					 	default:
					 		cout<<"Wrong menu selection..";
					 		
					 } 
					
					
					
				}else{
					system("cls");
					cout<<"Wrong pin!! \a ";
					goto old_acc;
				}
			break;
			
			case 2:
				//creating new account
				
				cout<<"*** Create New Account *** "<<endl;
				cout<<" Enter user name :";cin>>new_name;
				cout<<" Enter Pin : ";cin>>pin;
				cout<<"Enter Account type : ";cin>>new_type;
				cout<<" Enter account balance :";cin>>amount;
				
				//Reset all variables to user entered
				user_name = new_name; old_pin = pin; account_type = new_type;
				balance = amount;
				
				system("cls");
				cout<<"Account Created \n";
			
				//take the user to the main options menu with new ID
				goto old_acc;
			break;
			case 3:
				system("cls");
				cout<<"\n\n\n\nAccout name :"<<user_name<<" Pin : "<<old_pin<<" \n Account type : "<<account_type;
				goto old_acc;
			break;
			default:
				cout<<"\nWrong Input\n\n";
				goto old_acc;
			break;
		}
		
	
	return 0;
}

