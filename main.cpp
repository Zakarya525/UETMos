#include <iostream>
#include"heaserFile.h"
#include<iomanip>
using namespace::std;

int main(int argc, char** argv) {
	Main run;
	PhoneBook ph_book;
	Application app;
	Game game;
	Music music;
	int a = run.login();	//if it returns 1 then main menu will run
	BEGIN:;
	int b = run.main_menu();	//depending on b value the switch will moving forward
	switch(b){
		case 1:{
			int a;
			cout<<endl<<endl<<setw(40)<<"1.Store new contact\n2.Display all contacts\n3.Back"<<endl;
			cin>>a;
			switch(a){
				case 1:
					ph_book.store_data();
					break;
				case 2:
					ph_book.display_data();
				case 3:
					goto BEGIN;
			}
			break;
		}
		case 2:{
			app.enlight_bulb();
			break;
		}
		case 3:{
			game.run_game();
			system("cls");
			cout<<"1.Play again\n2.Main menu\n3.Exit"<<endl;
			int a;
			cin>>a;
			switch(a){
				case 1:{
					game.run_game();
					
					break;
				}
				case 2:
					goto BEGIN;
				case 3:
					exit(0);
			}
			break;
		}
		case 4:{
			music.play_music();
			break;
		}
		case 5:{
			cout<<"Thank You"<<endl;
			exit(0);
			break;
		}
		case 6:{
			goto BEGIN;
			break;
		}
			
	}
	return 0;
}

