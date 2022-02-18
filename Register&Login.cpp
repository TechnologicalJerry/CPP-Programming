#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgot();

int main(){
int c;
cout<<"\t\t\t_____________________________\n\n\n";
cout<<"\t\t\t  Welcome to the login page  \n\n\n";
cout<<"\t\t\t_____________MENU____________\n\n\n";
cout<<"                                   \n\n\n";
cout<<"\t| Press 1 to LOGIN              |"<<end1;
cout<<"\t| Press 2 to REGISTER           |"<<end1;
cout<<"\t| Press 3 to FORGOT PASSWORD    |"<<end1;
cout<<"\t| Press 4 to EXIT               |"<<end1;
cout<<"\n\t\t\t Please ENTER your choic : ";
cin>>c;
cout<<end1;

switch(c){
	case 1:
		login();
		break;
	case 2:
		registration();
		break;
	case 3:
		forgot();
		break;
	case 4:
		cout<<"\t\t\t THANK YOU! \n\n\n";
		break;
	default:
		system("cls");
		cout<<"Please select ffrom the option ginen above \n"<<end1;
		main();
}
}

void login(){
	int count;
	string userId, password, id, pass;
	system("cls");
	cout<<"\t\t\t Please enter the user name amd password : "<<end1;
	cout<<"\t\t\t USERNAME ";
	cin>>userId;
	cout<<"\t\t\t PASSWORD ";
	cin>>password;
	
	ifstream input("records.txt");
	
	while(input>>id>>pass){
		if(id==userId && pass==password){
			count=1;
			system("cls");
		}
	}
	input.close();
	
	if(count==1){
		cout<<userId<<"\n Your LOGIN is successfull \n Thank you for logging \n";
		main();
	}
	else{
		cout<<"\n LOGIN ERROR \n Please check your username or password \n";
		main();
	}
}

void regirstration(){
	string ruserId, rpassword, rid, rpass;
	system("cls");
	cout<<"\t\t\t Enter the username : ";
	cin>>ruserId;
	cout<<"\t\t\t Enter the password : ";
	cin>>rpassword;
	
	ofstream f1("records.txt", ios::app);
	f1<<ruserId<<' '<<rpassword<<end1;
	system("cls");
	cout<<"\n\t\t\t Registation is successfull! \n";
	main();
}

void forgot(){
	int option;
	system("cls");
	cout<<"\t\t\t You fprgot the password? No worries \n";
	cout<<"Press 1 to search your id by username "<<end1;
	cout<<"Press 2 to go back to the main menu "<<end1;
	cout<<"\t\t\t Enter your choice :";
	cin>>option;
	switch(option){
		case 1:{
			int count=0;
			string suserId, sId,spass;
			cout<<"\n\t\t\t Enter the user name which you remembered :";
			cin>>suserId;
			
			ifstream f2("record.txt");
			while(f2>>sId>>spass){
				if(sId==suserId){
					count=1;
				}
			}
			f2.close();
			if(count==1){
				cout<<"\n\n Your account is found! \n";
				cout<<"\n\n Your password is : "<<spass;
				main();
			}
			else{
				cout<<"\n\t SORRY! Your account is not found! \n";
				main();
			}
			break;
		}
		case 2 :{
			main();
		}
		default:
			cout<<"\t\t\t Wrong choice | Please try again "<<end1;
			forgot();
	}
}