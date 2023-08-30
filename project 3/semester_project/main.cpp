#include <iostream>//for input and outputs
#include  <cstdlib>//for random nums
#include <ctime> //for more quality random nums
using namespace std;//standard lib
 
int main() {
	
	int random_num,game_level,atempts,option,score;
	char yes_or_no;
	score = 0;
start_game:	
	cout<<"========= Welcome to The Guess Cassino =========\n\n"
		"	Select a level \n"
		".1. Easy GHS 5 \n"
		".2. Normal GHS 10 \n"
		".3. Advanced GHS 50 \n "
		".4. Quit  \n    Select : ";
		cin>>game_level;
	switch(game_level){
		
		case 1:
			atempts = 5;
			system("cls");
			while(atempts >0){
				srand(time(NULL)+1);
				random_num = rand()%7;
				cout<<"       Guess a number      : ";
				cin>>option;
				if(option == random_num){
					cout<<"\n You guessed right ["<<option<<" ]";
					score++;
				}else{
					cout<<"\n Oh Damn, you missed it. Its "<<random_num<<" not "<<option<<endl ;
				}
				atempts--;
			}cout<<" You had GHS "<<score*5;
			cout<<"\n\n Do you want to play again??\n [y/n]       :";
			cin>>yes_or_no;
			if(yes_or_no=='n'||yes_or_no=='N'){
					goto quit;		
				}else{
					system("cls");
					cout<<"\n I know you like this game from ecodeLabs \n\n";
					goto start_game;
				}
		break;
		case 2:
		atempts = 7;
			system("cls");
			while(atempts >0){
				srand(time(NULL)+1);
				random_num = rand()%10;
				cout<<"       Guess a number      : ";
				cin>>option;
				if(option == random_num){
					cout<<"\n You guessed right ["<<option<<" ]";
					score++;
				}else{
					cout<<"\n Oh Damn, you missed it. Its "<<random_num<<" not "<<option<<endl ;
				}
				atempts--;
			}cout<<" You had GHS "<<score*10;
			cout<<"\n Do you want to play again??\n [y/n]       :";
			cin>>yes_or_no;
			if(yes_or_no=='n'||yes_or_no=='N'){
					goto quit;		
				}else{
					system("cls");
					cout<<"\n I know you like this game from ecodeLabs \n\n";
					goto start_game;
				}
		break;
		case 3:
			atempts = 10;
			system("cls");
			while(atempts >0){
				srand(time(NULL)+1);
				random_num = rand()%15;
				cout<<"       Guess a number      : ";
				cin>>option;
				if(option == random_num){
					cout<<"\n You guessed right ["<<option<<" ]";
					score++;
				}else{
					cout<<"\n Oh Damn, you missed it. Its "<<random_num<<" not "<<option ;
				}
				atempts--;
			}cout<<" You had GHS "<<score*50;
			cout<<"\n Do you want to play again??\n [y/n]       :";
			cin>>yes_or_no;
				if(yes_or_no=='n'||yes_or_no=='N'){
					goto quit;		
				}else{
					system("cls");
					cout<<"\n I know you like this game from ecodeLabs \n\n";
					goto start_game;
				}
			
		break;
		case 4:
			quit:
			cout<<"\n It was a fun time with you! \n";
			return 0;
		break;		
		default:
			system("cls");
			cout<<" \n Select a valid option \n";
			goto start_game;
		break;
	}
	return 0;
}
/*
FOR MORE INFORMATION, CALL US ON 0557196527 OR @ecodeLabs ON ALL MEDEA PLATFORMS
	
*/

