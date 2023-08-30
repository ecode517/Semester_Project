#include <iostream>
using namespace std;

class ecode{
	public:
		string word;
		string meaning;
};

int main() {
	int number_of_words = 50;
	int number_of_categories =4;
	int available_words = 4;
	int option,category;
	ecode dictionary[number_of_categories][number_of_words];
		//dictionary for animals with index[0]
		dictionary[0][0]={"Dog","A mamal that is usaully refered to as a pet to serve as a means of help and security."};
		dictionary[0][1]={"Bird","A bird is any animal with wings and feathers and usually capable of flying, it lays eggs too"};
		dictionary[0][2]={"Cow","An adult female of the large mamal species that produce milk and meat."};
		dictionary[0][3]={"Housefly","Any insect that dwells with human and likely attracted to refuse"};
				
		//dictionary for institutions with index[1]
		dictionary[1][0]={"ecode","A computing institute in Ghana that teaches vomputer related courses"};
		dictionary[1][1]={"ECG","A governmental instution that distribute eletrical energy to homes."};
		dictionary[1][2]={"GES","A part of the education services in Ghana that helps in the teaching and learning of people"};
		dictionary[1][3]={"UENR","A public university in Sunyani-Ghana founded by Dr. Petter Appiahene and ecodeLabs in the year 1990"};
		
		//dictionary for local names with index[2]
		dictionary[2][0]={"Kofi","A local Ghanaian name for a male born on friday."};
		dictionary[2][1]={"Ama","A local name ussualy refering to a female born on saturday."};
		dictionary[2][2]={"Akoto","An Ewe traditional name which can be used for both gender"};
		dictionary[2][3]={"Osei","An ashanti name of people relating to the stool of the Omanhene of Kumasi-Ghana"};
		
		//dictionary for term with index[3]
		dictionary[3][0]={"wassup","A general term that is used to communicate to a friend asking what they're doing'."};
		dictionary[3][1]={"TG","A short way of saying thank God."};
		dictionary[3][2]={"FWGK","A short form of insulting a fool[Fa wo gyimii ko]"};
		dictionary[3][3]={"kk","A short form of saying okay."};
		
		
		
		
	start:		
	cout<<"\n\n   ------<< SEARCH ENGINE >>------\n\n\n\n"
	"...Find words and meaning based on their categories...\n\n"
	"1. Animals\n"
	"2. Institutions\n"
	"3. Local Names\n"
	"4. Terms\n"
	"  waiting---- : ";
	
	cin>>option;
switch(option){

	case 1:
		cat1:
	category = 0;
		for(int i=0; i<=available_words;i++){
			cout<< i+1 <<" "<<dictionary[category][i].word<<"\n";
		}
		cout<<"Find meanig [1 -"<<available_words<<" ]";
			cin>>option;
			if(option >=1 || option <= available_words){
				system("cls");
				cout<<"\n\n\n"<< dictionary[category][option-1].word <<" : " <<dictionary[category][option-1].meaning;
				goto start;
			}else{
				cout<<"Invalid option";
				goto cat1;
			}
	break;
	case 2:
		category = 1;
		for(int i=0; i<=available_words;i++){
			cout<< i+1 <<" "<<dictionary[category][i].word<<"\n";
		}
		cout<<"Find meanig [1 -"<<available_words<<" ]";
			cin>>option;
			if(option >=1 || option <= available_words){
				system("cls");
				cout<<"\n\n\n"<< dictionary[category][option-1].word <<" : " <<dictionary[category][option-1].meaning;
				goto start;
			}else{
				cout<<"Invalid option";
				goto cat1;
			}
	break;
	case 3:
	category = 2;
		for(int i=0; i<=available_words;i++){
			cout<< i+1 <<" "<<dictionary[category][i].word<<"\n";
		}
		cout<<"Find meanig [1 -"<<available_words<<" ]";
			cin>>option;
			if(option >=1 || option <= available_words){
				system("cls");
				cout<<"\n\n\n"<< dictionary[category][option-1].word <<" : " <<dictionary[category][option-1].meaning;
				goto start;
			}else{
				cout<<"Invalid option";
				goto cat1;
			}
	break;
	case 4:
		category = 3;
		for(int i=0; i<=available_words;i++){
			cout<< i+1 <<" "<<dictionary[category][i].word<<"\n";
		}
		cout<<"Find meanig [1 -"<<available_words<<" ]";
			cin>>option;
			if(option >=1 || option <= available_words){
				system("cls");
				cout<<"\n\n\n"<< dictionary[category][option-1].word <<" : " <<dictionary[category][option-1].meaning;
				goto start;
			}else{
				cout<<"Invalid option";
				goto cat1;
			}
	break;
	case 5:
		cout<<"\n\n\n\nThanks for using ecode Dictionary\n\n\n\n\n";
	return 0;
	default:
		cout<<"\n\n\a Hey mandem, read the options well!!\a\a";
		goto start;	
	break;
}
	
	
	
	
	return 0;
}
