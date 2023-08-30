#include <iostream>
using namespace std;

int main() {
	int option,pin;
	string number,reference;
	float amount;
	float cash_balance = 100.1;
	int user_pin = 1234;
	start:	
	cout<<"\n-------Vodafone Clone-------\n"
	"\n1.Transfer Money\n"
	"\n2.Pay Bills\n"
	"\n3.Airtime & Bundles\n"
	"\n4.Financial Service\n"
	"\n5.My wallet\n"
	"  _________________:_";
	cin>>option;
	if(option==1){
	
		
	cout<<"\n--- Transfer Money ---\n"
	"\n1.MoMo User\n"
	"\n2.Non MoMo User\n"
	"\n3.Other Network\n"
	"\n4.Bank Account\n"
	
	"  _________________:_";
	cin>>option;
		if(option==1){
		
			cout<<"\nEnter Number \n"
			"\n________";
			cin>>number;
				system("cls");
			cout<<"\nEnter Amount \n"
			"\n_________";
			cin>>amount;
			system("cls");
			cout<<"\nEnter reference \n"
			"\n_________";
			cin>>reference;
			system("cls");
		cout<<"Confirm an amount of "<<amount<<" to "<<number<<". Reference : "<<reference<<"\n";
		cout<<"1.SEND		2.CANCEL\n";
		cin>>option;
			if(option==1){
				cout<<"Enter PIN :";
				cin>>pin;
				if(pin==user_pin){
					system("cls");
					cout<<"\n\n\n TRANSFER SUCCESSFUL\n\n";
					cout<<"\n Balance is "<<cash_balance-amount;
				}else if(amount > cash_balance){
					cout<<"\nNot enough balance\n";
				
				}
				else{
					system("cls");
					cout<<"\n\n\n TRANSFER FAILED \n";
				}
			}else{
				cout<<"\nTransaction canceled\n";
				return 0;
		
		}
	}else{
	//other options
	cout<<"\n\a SERVICE is currently not available. Contact our customer service on 0557196527\n";
}
		}	else if(option==3){
					cout<<"\n1.Airtime To Self\n"
					"\n2.To Other Network\n";
					cin>>option;
					if(option==1){
						cout<<"\nEnter amoount :";
						cin>>amount;
						cout<<"Enter Pin :";
						cin>>pin;
						if(amount> cash_balance){
							cout<<"\nNot enough balance\n";
						}else if(pin==user_pin){
								system("cls");
							cout<<"\n\n Airtime Of "<<amount<<" sent to self";
							cout<<"\n Balance is "<<cash_balance-amount;	
						}
						else{
							system("cls");
							cout<<"\n\n\n TRANSACTION FAILED \n";
						}
							}else if(option==2){
								cout<<"Enter number :";
								cin>>number;
								cout<<"\nEnter amoount :";
								cin>>amount;
								cout<<"Enter Pin :";
								cin>>pin;
								if(amount > cash_balance) {
									cout<<"\nNot enough balance\n";
								}else if(pin==user_pin){
									system("cls");
									cout<<"\n\n Airtime Of "<<amount<<" sent to "<<number;	
									cout<<"\n Balance is "<<cash_balance-amount;
								}
								else{
									system("cls");
									cout<<"\n\n\n TRANSACTION FAILED \n";
								
								}
							}
				}else if(option==5){
					cout<<"Current balance is :"<<cash_balance;
					goto start;
				}
				else{
			//other options
			cout<<"\n\a SERVICE is currently not available. Contact our customer service on 0557196527\n";
		}
			


	
	return 0;
}
