#include "game.hpp"
using namespace std;





int main(){
 
  cout << "\nWelcome to a really awesome text adventure game full of suprises and death!\n";
  int menu_selection = 0;
  string choice_str;
  string exit_input = "2";
  while ( menu_selection != 2 ){

    do{
      cout << "\nWould you like to play?"<<endl;
      cout << "1 - Yes\n";
      cout << "2 - No\n";
      cout << "3 - WTF\n";
      getline ( cin, choice_str );
      menu_selection = strtol ( choice_str.c_str(), NULL, 10 );
    }while ( menu_selection != 2 );
  }


}
