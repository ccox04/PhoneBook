#include "phonebook.h"
#include <err.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
using std::ifstream;
using std::cin;



int main(int argc, char* argv[])
{
  PhoneRecord PR;
  if(argc<=0)
    {
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
    	if (action == "add") {
      		
      		cout << "Enter in the First name of the Contact." << endl;  
      		cout << "Then enter the last name followed by the phone number." << endl; 
      		cout << " Enter it exactly in the same format as shown: \n" << endl;
      		cout << "Last Name First name Phone number. \n" << endl;
      		cout << "Doe John 540-231-1500" << endl;
      		cin >> contact;
      		//PhoneRecord PR.cinAppend(contact);
		PR.cinAppend(contact);
	}
	else if(action == "view"){
	  //PhoneRecord PR.viewContacts();	
	  PR.viewContacts();
	}
	else if(action == "search"){
		cout << "Please enter the First name of the Contact:"<< endl;
		cin>>contact;
		//PhoneRecord PR.search(contact);
		PR.search(contact);
	}
	//else if(action == "remove"){
		//cout << "Please enter the Last name followed by the First name:" <<endl;
		//cin >> contact;
		//PhoneRecord PR.remove(contact);
		//PR.remove(contact);
	//}
	else if(action == "help"){
		cout << "To add a Contact type 'add'" << endl;
        	cout << "To remove a Contact type 'remove'" << endl;
        	cout << "To view the entire Phone Book type 'view'" << endl;
        	cout << "To find a specific Contact type 'search'" << endl;
        	cout << "To view a list of all the commands type 'help'" << endl;
        	cout << "To exit the program type 'exit'" << endl;
	}
	else if (action == "exit"){
		return 0;
	}
	}
    }
}
