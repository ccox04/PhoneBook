#include "phonebook.h"
#include <err.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>

using namespace std;


int main(int argc, char* argv[])
{
  //Initializing PhoneRecord PR
  PhoneRecord PR;
  //Outputting options to the user
	cout << "To add a Contact type 'add'" << endl;
        cout << "To remove a Contact type 'remove'" << endl;
        cout << "To view the entire Phone Book type 'view'" << endl;
        cout << "To find a specific Contact type 'search'" << endl;
        cout << "To view a list of all the commands type 'help'" << endl;
        cout << "To exit the program type 'exit'" << endl;
	string action;
	string contact;
	while(1)
  	{
   	 cin >> action;
	 //List of if statements based on what the user typed in
    	if (action == "add") {
      		cout << "Enter the Last Name First name Phone number of the contact" << endl;
      		cout << "i.e. Doe_John_540-231-1500:" << endl;
      		cin >> contact;
		PR.cinAppend(contact);
	}
	else if(action == "view"){	
	   PR.viewContacts();
	}
	else if(action == "search"){
		cout << "Please enter the First name of the Contact:"<< endl;
		cin>>contact;
		PR.search(contact);
	}
	else if(action == "help"){
		cout << "To add a Contact type 'add'" << endl;
        	cout << "To remove a Contact type 'remove'" << endl;
        	cout << "To view the entire Phone Book type 'view'" << endl;
        	cout << "To find a specific Contact type 'search'" << endl;
        	cout << "To view a list of all the commands type 'help'" << endl;
        	cout << "To exit the program type 'exit'" << endl;
	}
	//This is the option that is used to exit the program
	else if (action == "exit"){
		return 0;
	}
	}
    
}
