#include <iostream>
using namespace std;

int main(){
	int option;
	string code;
	int	balance = 20;
	float amount;
	float minutes = balance * 0.5;
	
	
	start:
	cout<<"\n\n*******  USSD ********\n\n"
	" *124# : Check main balance\n"
	" *567# : Buy mashup\n"
	" *506# : Borrow Airtime\n"
	" *138# : Buy Data Bundle\n"
	"		0. To Exit   	\n"
	"		SELECT : ";
	cin>>code;
	cout<<"----------------------------";
	cout<<"\n\n1. SEND        2. CANCEL\n";
		cin>>option;
		
	if(option==1){
		
			if(code=="*124#"){
			cout<<"Available balance is GHS \n"<<balance<<".00 "<<minutes<<" mins.";
			    
		}
	 
		else if(code=="*567#"){
			cout<<"1. Mashup For Self\n"
				"2. Mashup For Others\n"
				"0. Back TO Menu\n"
				"	waiting.. :";
				cin>>option;
				if(option==0){
					system("cls");
					goto start;
				}else if(option ==1){
					cout<<"Enter amount :";
					cin>>amount;
					cout<<"Confirm payment of "<<amount<<"to get mashup of "<<amount*5<<" mins & "<<amount*2<<" units!";
						cout<<"\n\n1. SEND        2. CANCEL\n";
					cin>>option;
					if(option==2){
						goto cancel;
					}else if(option==1 && amount <= balance) {
						cout<<"Payment successful..";
					}else{
						cout<<"Payment failed.. check balance";
					}
					
					
				}else if(option==2){
					cout<<"Enter receivers number :";
					cin>>code;
					
					cout<<"Enter amount :";
					cin>>amount;
					cout<<"Confirm payment of "<<amount<<"to get mashup of "<<amount*5<<" mins & "<<amount*2<<" units!"<<" to "<<code;
						cout<<"\n\n1. SEND        2. CANCEL\n";
					cin>>option;
					if(option==2){
						goto cancel;
					}else if(option==1 && amount <= balance) {
						cout<<"Payment successful..";
					}else{
						cout<<"Payment failed.. check balance";
					}
					
				}
		} 
	
		else if(code=="*506#"){
			cout<<"   BORROW AIRTIME\n\n"
			"Enter amount :";
			cin>>amount;
			balance+=amount;
			cout<<"\n\n Current Balance is "<<balance<<", Previous balance was "<<balance-amount;
			
		}else if(code=="*138#"){
			cout<<"\n\n\n Buy Data Bundle\n\n"
			"Enter amount : ";
			cin>>amount;
			
			cout<<"Confirm payment of "<<amount<<" to get Data Bundle of "<<amount*3<<" MB ";
						cout<<"\n\n1. SEND        2. CANCEL\n";
					cin>>option;
					if(option==2){
						goto cancel;
					}else if(option==1) {
						
						cout<<"Payment successful..";
						
						
					}else{
						cout<<"Payment failed.. check balance";
					}
					
		}
	
			
	}else if(option==2){
		cancel:
		system("cls");
		cout<<"\n\n\n\nTHANKS FOR USING OUR SERVICE!!!\a";
			return 0;
			 
	}else if(option==0){
		return 0;
	}
	

	

	
	return 0;
}
