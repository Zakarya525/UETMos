#include<iostream>
#include<string.h>
#include<iomanip>
#include "heaserFile.h"
#include<time.h>
#include<graphics.h>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>		//access windowfiles
#include<mmsystem.h>	//access multimedia funtions
#define UP_ARROW 72		//macros in c++
using namespace::std;

void Main::show_time(){
	time_t gettime = time(0);	//getting initially with time 0 and returns current time in number of sec
	char* td = ctime(&gettime);	//returns a pointer to a string of the "day month year hr:mnts:secs" form
	cout<<setw(120)<<"*------------------------*"<<endl;
	cout<<setw(120)<<td<<endl;	//setw means set the width of th output with 100 spaces
	cout<<setw(120)<<"*------------------------*"<<endl;
	
}

int Main::login(){

	show_time();
	char usern[30];
	char passwd[20];
	cout<<endl<<endl<<setw(60)<<"::::::::::::::::::::---:::::::::::::::::::"<<endl;
	cout<<endl<<endl<<setw(40)<<"Enter username: "<<endl;
	cout<<setw(40)<<"Enter Password: ";
	cout<<endl<<endl<<setw(60)<<"::::::::::::::::::::---:::::::::::::::::::"<<endl;
	cout<<setw(60);
	cin>>usern;
	cout<<setw(60);
	cin>>passwd;

	int a = strcmp(username, usern);
	int b = strcmp(password, passwd);
	
	if(a and b){
		cout<<"There is a mistake with username or password";
		exit(0);
	}
	else{
		int a;
		system("cls");
		show_time();
	cout<<endl<<endl<<setw(60)<<"::::::::::::::::::::---:::::::::::::::::::"<<endl;
		cout<<endl<<endl<<setw(40)<<"1.Run the application\n"<<setw(24)<<"2.Exit"<<endl;
	cout<<endl<<endl<<setw(60)<<"::::::::::::::::::::---:::::::::::::::::::"<<endl;
		cin>>a;
		if(a == 1){
			int b;
			system("cls");
			show_time();
	cout<<endl<<endl<<setw(60)<<"::::::::::::::::::::---:::::::::::::::::::"<<endl;
			cout<<endl<<endl<<setw(40)<<"1.Menu\n"<<setw(39)<<"2.Exit"<<endl;
	cout<<endl<<endl<<setw(60)<<"::::::::::::::::::::---:::::::::::::::::::"<<endl;
			cin>>b;
			if(b == 1){
				return 1;
			}
			else{
				exit(0);
			}
		}
		else
			exit(0);	
	}
}
	


int Main::main_menu(){
	int a;
	system("cls");
	show_time();
	cout<<endl<<endl<<setw(43)<<"Main Menu"<<endl;
	cout<<endl<<endl<<setw(60)<<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl<<endl<<setw(50)<<"1.Phone book"<<endl<<setw(51)<<"2.Application"<<endl<<setw(44)<<"3.Game"<<endl<<setw(45)<<"4.Music"<<endl<<setw(44)<<"5.Exit"<<endl<<setw(44)<<"6.Back";
	cout<<endl<<endl<<setw(60)<<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cin>>a;
	return a;	
}

void PhoneBook::store_data(){
	ofstream out;
	out.open("Person Info.dat", ios::app);
	cout<<endl<<endl<<setw(40)<<"Insert name, contact number, gender and address respectively: "<<endl<<endl<<setw(40);
	cin>>name>>contact>>gender>>address;
	out<<endl<<name<<endl<<contact<<endl<<gender<<endl<<address<<endl;
	cout<<"Added successfully";
	getch();
	out.close();
	system("cls");
		
}

void PhoneBook::display_data(){
	ifstream in;
	in.open("Person Info.dat");
	in>>name;
	in>>contact;
	in>>gender;
	in>>address;
	while(!in.eof()){
		cout<<"Name: "<<name<<"\nContact Number: "<<contact<<"\nGender: "<<gender<<"\nAddress: "<<address<<endl;
	
		in>>name;
		in>>contact;
		in>>gender;
		in>>address;	
	}
	getch();
	in.close();
	system("cls");
	main_menu();
}

void Application::enlight_bulb(){
	system("cls");
	char ch;
	show_time();
	cout<<endl<<endl<<endl<<setw(45)<<"Press the UP ARROW key to turn on the red bulb"<<endl;
	ch = getch();		//will return the ascii of output
	if(ch == 72){		//ascii code of up arrow key is 72
	
			int gd = DETECT,gm;
			initgraph(&gd, &gm, "c:\\TC\\BGI");
		
			setfillstyle(SOLID_FILL, RED);
			circle(200, 200, 100);
			floodfill(201, 201, WHITE);
		}
			getch();
			closegraph();
			main_menu();
		
	
	}
	

void Game::run_game(){
	char  ch;
	int score = 0;
	char arr[50];
	initwindow(1023, 590);
	for(int g = 0; g < 10; g++)
		for(int i = 0; i < 100; i++){
			circle(500, 200+i, 20);
			
			line(200+i,300,400+i,300);
			score += 1;
			outtextxy(200,100,"Archery Game");

			outtextxy(200,1000,"YOUR SCORE IS: ");
			sprintf(arr, "%d",score);
			outtextxy(220,1000,arr);
			delay(10);
			cleardevice();
	}
			
	
}


void Music::play_music(){
	int a;
	cout<<"1.singer 1\n2.Singer 2"<<endl;
	cin>>a;
	if(a == 1)
		cout<<"Wait till end."<<endl;
		cout<<"Singing...";
		PlaySound(TEXT("Singer3.wav"),NULL, SND_SYNC); //snd_sync plays default sound in case of missing file
	if(a == 2)
		cout<<"Wait till end."<<endl;
		cout<<"Singing...";
		PlaySound(TEXT("Singer2.wav"),NULL, SND_SYNC); 
	
	system("cls");
	main_menu();
}
		



		
