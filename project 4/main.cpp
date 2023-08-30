#include <iostream>
using namespace std;

int main() {
	char opcode;
	int numbers;
	
	cout<<"           eSCIENTIFIC CALCULATOR-Labs \n\n";
	
	cout<<" How many numbers are you working on :";
	cin>>numbers;
	int cal[numbers];
	int data;
	double ans;
	cout<<"Select opcode [+,-,/,*] :";
	cin>>opcode;
	
	switch(opcode){
		case '+':
			for(int i=1;i<=numbers;i++){
				cout<<"Enter number "<<i<<" : ";
				cin>>data;
				ans+=data;
			}
			cout<<"Result is :"<<ans;
		break;
		case '-':
			for(int i=1;i<=numbers;i++){
				cout<<"Enter number "<<i<<" : ";
				cin>>data;
				ans-=data;
			}
			cout<<"Result is :"<<ans;
		break;
		case '/':
			for(int i=1;i<=numbers;i++){
				cout<<"Enter number "<<i<<" : ";
				cin>>data;
				ans/=data;
			}
			cout<<"Result is :"<<ans;
		break;
		case '*':
			for(int i=1;i<=numbers;i++){
				cout<<"Enter number "<<i<<" : ";
				cin>>data;
				ans*=data;
			}
			cout<<"Result is :"<<ans;
		break;
		default:
			system("cls");
			cout<<"========== Wrong selection!!";
		break;	
	}
	
	
	
	
	return 0;
}

/* for more info : @ecodeLabs */
