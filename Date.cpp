#include <iostream>
#include <string>
using namespace std;

const string monthname[13] = {"January" , "January", "February", "March", "April", 
	"May", "June", "July", "August", "September", "October", "November", "December"};

class Date{

private: 
	int month;
	int day;
	int year;

public:
	Date(int day, int month, int year);
	void printform1();
	void printform2();
	void printform3();
};

Date::Date(int day, int month, int year){
	this -> day = day;
	this -> month = month;
	this -> year = year;
}
int main(){
	Date newdate1= Date(25,12,2014);
	newdate1.printform1();
	newdate1.printform2();
	newdate1.printform3();
}
void Date::printform1(){
	
	cout << month << "/"<< day << "/" << year<<endl;
}

void Date::printform2(){
	if (month==1){
		cout << monthname[1] << " " << day << ", " << year<<endl;
	}
	else if (month==2){
		cout << monthname[2] << " " << day << ", " << year<<endl;
	}
	else if (month==3){
		cout << monthname[3] << " " << day << ", " << year<<endl;
	}
	else if (month==4){
		cout << monthname[4] << " " << day << ", " << year<<endl;
	}
	else if (month==5){
		cout << monthname[5] << " " << day << ", " << year<<endl;
	}
	else if (month==6){
		cout << monthname[6] << " " << day << ", " << year<<endl;
	}
	else if (month==7){
		cout << monthname[7] << " " << day << ", " << year<<endl;
	}
	else if (month==8){
		cout << monthname[8] << " " << day << ", " << year<<endl;
	}
	else if (month==9){
		cout << monthname[9] << " " << day << ", " << year<<endl;
	}
	else if (month==10){
		cout << monthname[10] << " " << day << ", " << year<<endl;
	}
	else if (month==11){
		cout << monthname[11] << " " << day << ", " << year<<endl;
	}
	else if (month==12){
		cout << monthname[12] << " " << day << ", " << year<<endl;
	}
	else {
		cout << "invalid month";
	}
}

void Date::printform3(){
	if (month==1){
		cout << day << " " << monthname[1] << " "<< year<<endl;
	}
	else if (month==2){
		cout << day << " " << monthname[2] << " "<<year <<endl;
	}
	else if (month==3){
		cout << day << " " << monthname[3] << " "<< year <<endl;
	}
	else if (month==4){
		cout << day << " " << monthname[4] << " "<<year <<endl;
	}
	else if (month==5){
		cout << day << " " << monthname[5] << " "<< year <<endl;
	}
	else if (month==6){
		cout << day << " " << monthname[6] << " "<< year <<endl;
	}
	else if (month==7){
		cout << day << " " << monthname[7] << " "<<year <<endl;
	}
	else if (month==8){
		cout << day << " " << monthname[8] << " "<<year <<endl;
	}
	else if (month==9){
		cout << day << " " << monthname[9] << " "<<year <<endl;
	}
	else if (month==10){
		cout << day << " " << monthname[10] << " "<<year <<endl;
	}
	else if (month==11){
		cout << day << " " << monthname[1] << " "<< year <<endl;
	}
	else if (month==12){
		cout << day << " " << monthname[12] << " "<< year <<endl;
	}
	else {
		cout << "invalid month"<<endl;
	}
}
