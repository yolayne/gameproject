#include "game.hpp"
using namespace std;
#include <string>
#include <iostream>





int main(){
 
  cout << "\nWelcome to a really awesome text adventure game full of death and destruction!\n";
  int menu_selection = 0;
  string choice_str;
  string exit_input = "2";
  while ( menu_selection != 3 ){

    do{
      cout << "\nWould you like to play?"<<endl;
      cout << "1 - Yes\n";
      cout << "2 - This is so stupid!\n";
      cout << "3 - No\n";
      cout << "Choose wisely, ;-) : ";
      getline ( cin, choice_str );
      menu_selection = strtol ( choice_str.c_str(), NULL, 10 );
    }while ( menu_selection < 1 || menu_selection > 3 );
    
    if ( menu_selection != 3 ){
		cout << "\n GAME ON, MOTHERFUCKER!!\n";
		return 0;
	}
	else{
		cout << "\n YOU PUSSY! GAME OVER!\n";
	}
  }


}
