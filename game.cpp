#include "game.hpp"
using namespace std;
#include <string>
#include <iostream>


/*
 * Layne : Write the story and the branches
 * Jane : Contribute to Story and branches
 * Steven : Coding the story	
 * Bob : Coding the story
 * 
 * 
 */




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
		int fisrt_situation();

	string start = "start";
	string* marker = &start;
	bool have_gun = false;
	bool help_man = false;
	bool exit_door = false;
	string gun_path = "gun path";
	string man_path = "man path";
	string door_path = "door path";

	
	string man = "move_man";
	string door = "move_door";
	string gun = "move_gun";
	
while (exit_door == false)
{

	while (marker == &start)
		{
			cout<< "you wake up. you are groggy. your vision is blured. your ears are ringing.\n you look to your left and see a man unconcious.\n blood is pooring form a wound on his leg. \n to your right you see a gun.\n you also notice a door behind you.\n\n ";
			string x;
			cin>>x;
			
			if (x.compare(gun)==0)
				{
					cout<<"you moved to the gun\n\n";
					marker = &gun_path;
					
				}
			if (x.compare(man)==0)
				{
					cout<< "you moved to the man\n\n";
					marker = &man_path;
				}
			
			if (x.compare(door)==0)
				{
				cout<<"you moved to the door\n\n";
				marker = &door_path;
				}
			if(x.compare(door)!=0 && x.compare(gun)!=0 && x.compare(man)!=0)
				{
					cout<<" type a two word comand. try using move_gun, move_man,or move_door\n\n";
				}
		}
	
	
	while (marker == &gun_path)
		{
			string grab = "grab_gun";
			string x;
			cin>>x;
			if (have_gun==true)
			{
				cout<< "you already picked up the gun. go to the man or the door.\n\n";
			}
			if (have_gun==false)
			{
			cout<<"you see that the gun is loaded\n\n";
			}
			if (x.compare(grab)==0)
				{
					cout<<"you picked up the gun.\n\n";
					have_gun = true; 
					
				}
			if (have_gun==true)
				{
					cout<< "now you can go to the door or to the man\n\n";
				}	
			if (x.compare(man)==0)
				{
					cout<<"you moved to the man\n\n";
					marker = &man_path;
				}
			if (x.compare(door)==0)
				{
					cout<<"you moved to the door";
					marker = &door_path;
				}
			
			if(x.compare(door)!=0 && x.compare(gun)!=0 && x.compare(man)!=0 && x.compare(grab)!=0)
				{
					cout<<" type a two word comand. try grab_gun\n\n";
				}
			
		}
	while (marker == &man_path)
	{	if (help_man == true)
		cout<< "you stopped the bleeding  \n\n";
		if (help_man == false)
		{
			cout<<"the man starts to wake up. he is clearly in shock.\n his leg has a large cut just below the knee and is bleeding badly.\n\n";
		}
		string bandage_man="bandage_man";
		string x;
		cin>>x;
		
		if (x.compare(bandage_man)==0)
			{
				cout<<"you used your shirt to bandage the wound\n\n";
				help_man = true;
			}
		if (x.compare(gun)==0)
				{
					cout<< "you moved to the gun\n\n";
					marker = &gun_path;
				}
		if (x.compare(door)==0)
			{
				cout<<"you moved to the door\n\n";
				marker = &door_path;
			}
		if(x.compare(door)!=0 && x.compare(gun)!=0 && x.compare(man)!=0 && x.compare(bandage_man)!=0)
			{
				cout<<" type a two word comand. try bandage_man\n\n";
			}
	}
	
	while (marker == &door_path)
	{
		cout<<"the door is unlocked. do you want to open it?\n\n";
		string open_door="open_door";
		string x;
		cin>>x;
		string y = "yes";
		if (x.compare(open_door)==0 || x.compare(y)==0)
			{
			cout<< "you left the room!!!\n\n";
			exit_door = true;
			marker = &start;
			}
		if (x.compare(man)==0)
			{
				cout<< "you moved to the man\n\n";
				marker = &man_path;
			}
		if (x.compare (gun)==0)
			{
				cout<<"you moved to the gun\n\n";
				marker = &gun_path;
			}
	
	
	if(x.compare(door)!=0 && x.compare(gun)!=0 && x.compare(man)!=0 && x.compare(open_door)!=0 && x.compare(y)!=0)
			{
				cout<<" type a two word comand. try using move_gun, move_man,or move_door\n\n";
			}
	}		
}

cout<< " you made it out of the room!\n\n";
}
	else{
		cout << "\n YOU PUSSY! GAME OVER!\n";
	}
}

}
