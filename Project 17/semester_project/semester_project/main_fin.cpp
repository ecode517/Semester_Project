#include <iostream>
#include <string>
using namespace std;

int main() {
    int array_length= 15;
    int lives = 5;
	int fails = 5;
    int option,trials,score;
    bool word_found;
	char user_input;
	string searching,play_again;
	 
    string words_2[array_length] = {"in","at","on","to","go","is","no","if","an","it","me","we","he","us","be"};
    string words_3[array_length] = {"but","and","not","ant","sun","son","car","are","yes","rap","leo","pup","dad","fan","can"};
    string words_4[array_length] = {"duck","tank","fine","bool","cook","king","time","same","some","note","type","code","slap","case","pain"};
    string words_5[array_length] = {"paint","print","pinky","ecode","cramp","trash","santa","crook","debug","error","wrong","write","right","five","array"};
    cout<<"              WELCOME TO HANGMAN'S GAME        \n" ;

start_game: // a label to reference when we want to start the game
cout<<"\n Select an option to Play \n"
		"1. Two letter words \n"
		"2. Three letter words \n"
		"3. Four letter words \n"
		"4. Five letter words \n "
		"5.Help   \n        select : ";
cin>>option;

/*
	The below code checks for the users choice using switch-case
	At this level the array of words are declared and their 
	total is the array_length we declared up there.
	*/
// The trials in the codes will allow the player to enter a word by its value times.
// The breaks terminate the cases when a match is found
start_search:
switch(option){
	case 1:// option for 2 letters
	
		trials = 2;
		searching = "__";
		break;
	case 2://option for 3 letters
		 
		trials = 3;
		searching = "___";
		break;
	case 3://option for 4 letters
	
		trials = 4;
		 
		searching = "____";
		break;
	case 4://option for more than 4 letters
	
		trials = 5;
		searching = "_____";
		break;
		case 5:
			system("cls");
			cout<<"\n This is Hangman's game that checks if the user input words or letters are found in the game words \n";	
			goto start_game;
		break;
	default : //checks for wrong selections
	
		system("cls");//This clears the screen
		cout<<"Wrong selection!";
		goto start_game; // this takes us to the start label
		break;		
}
/*This is where we check if the player still have life which is from 5 - 1 
	before we allow them to play the game.
*/

    while (lives >= 0) {
  	 
    	word_found = false;//this remains false until a word is found
// Accept user input a letter at a time
	  
		cout<<  
		"+++++++++++++++++++++++++"
	    "\n+ Enter a guess Letter + \n"
		"+++++++++++++++++++++++++ \n";
	    
	    cout<< " There are "<<trials<<" words to find, Lucks \n   "<<searching<<" \n";
  while(trials >=  1){
  	    
	cin >> user_input;
	user_input = tolower(user_input);//convert the word to lower case since the arrays are lower case
		       
  
	searching[searching.size()-trials]	= user_input;
        
        cout<<"You entered : "<<searching<<" \n";
	trials--;// we reduce the live when player gives wrong word 
}
// this is where we check if the users word is in the array
        for (int counter = 0; counter < 15; counter++) {
            if (searching == words_2[counter] || searching == words_3[counter] || searching == words_4[counter] || searching == words_5[counter]) {
                word_found = true;
                break;  // Exit the loop if word is found
                
            }
        }

// actions to perform when a word is found or not

        if (word_found) {
        	system("cls");
            cout << "Yupii, .. " << searching << " .. was found! Bravo";
            cout << "\n Current Lives: " << lives;
            score++;
            goto start_search;
            
        } else {
            lives--;
            cout << "Damn, you lost! "<<searching<<" not found";
            cout << "\n Current Lives: " << lives;
            cout << "\n Try again \n";
            
             if (lives == 0) {
            cout << "\n [ Learn to Play at ecodeLabs ] \n";
            break;  // Exit the loop if player runs out of lives
        }else{
        	goto start_search;
        	//moves to the search label when lives are not over
		}

       
        }  
    }
    
    cout<<"Do you want to continue [y/n] : ";
    cin>>play_again;
    if(play_again == "y" || play_again == "Y"){
    	system("cls");
    	cout<<"========= I think you love this Game, Let's see how inteligent you're =========\n\n";
    	cout<<"Your current score was : "<<score<<" / "<<fails;
    	
    	goto start_game;
	}else{
		system("cls");
		cout<<"Your score was : "<<score<<" / "<<fails;
		cout<<"\n========= It was nice playing with you =========";
	}
    
 
    return 0;
}





