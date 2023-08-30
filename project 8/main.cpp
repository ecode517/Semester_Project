#include <iostream>

using namespace std;

int main() {
int num_emp;

cout << "------------------------PAYROLL SYSTEM---------------------------\n";

cout << "Enter number of Employees \n";
cin >> num_emp;

//Declration of variable
string first_name[num_emp],last_nam[num_emp],accnum[num_emp];
int Total_Hours_Worked[num_emp],Overtime[num_emp];
double pay[num_emp],Net_Pay[num_emp];
double Income_Tax[num_emp], over_pay[num_emp];
int Other_Deductibles = 100;
double Gross_Pay[num_emp];

//loop statement
for (int i=0;i<num_emp;i++){
cout << "Enter first name : \n";
cin >> first_name[i];
cout << "Enter last name : \n";
cin >> last_nam[i];
cout << "Enter Account number \n";
cin >> accnum[i];
cout << "Enter employee Pay : \n";
cin >> pay[i];
cout << "Enter employee total working hours : \n";
cin >> Total_Hours_Worked[i];
cout << "Enter employee overtime hours : \n";
cin >> Overtime[i];
cout << "Enter overtime pay : \n";
cin >> over_pay[i];

}
cout << "--------------PAYROLL SYSTEM-----------------------\n";
cout << "--------------PAYROLL REPORT------------------------\n";
for(int i=0; i<num_emp;i++){
	
// Calculations
Gross_Pay[i] = (pay[i]*Total_Hours_Worked[i])+(Overtime[i]*over_pay[i]);
Income_Tax[i] = Gross_Pay[i]*0.8;
Net_Pay[i] = Gross_Pay[i] - Income_Tax[i] - Other_Deductibles;

cout << "-----------------------------------------------------\n";
cout << "Employee  Name : " << first_name[i] <<"   "<< last_nam[i] <<endl;
cout << "Acount number  : " << accnum[i] <<endl;
cout << "Net Salary     : " <<Net_Pay[i] <<endl;
cout << "\nAn amount of GHC100.00 was deducted from you account for insurance policy\n";
cout << "------------------------------------------------------\n";

}
cout << "---------------------PAYROLL SYSTEM------------------\n";
cout << " \n";
cout << "                  ePazzleLabs-saving \n";
	
return 0;
}
