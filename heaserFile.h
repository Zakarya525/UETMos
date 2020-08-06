class Main{
	private:
		char username[30] = "zkaryakhan";
		char password[20] = "123345";
	public:
		void show_time();
		int login();
		int main_menu();
};

class PhoneBook:public Main{
	private:
		char name[20];
		char contact[20];
		char gender[8];
		char address[20];
	public:
		void store_data();
		void display_data();
		
};

class Application:public Main{
	
	public:
		void enlight_bulb();
	
};

class Game:public Main{
	
	public:
		void run_game();
	
};

class Music:public Main{
	
	public:
		void play_music();
	
};

