#include "phonebook.h"
#include <err.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
using std::ifstream;
using std::cin;



int main(int argc, char* argv[])
{

  if(argc<=0)
    {
      //Include here
      string contact;
      cout << "Enter in the First name of the Contact." << endl;  
      cout << "Then enter the last name followed by the phone number." << endl; 
      cout << " Enter it exactly in the same format as shown: \n" << endl;
      cout << "Last Name First name Phone number. \n" << endl;
      cout << "Doe John 540-231-1500" << endl;
      cin >> contact
      
      PhoneRecord PR.cinAppend(contact);


    }
  for(int i=0;i<argc;i++)
    {
      ifstream in( argv[i]);
      if (!in.is_open())
	{
	  warn("%s: error message", argv[i]);//error opening *argv
	  if(state<2){
	    state=2;
	  }
	}
      else{
	PhoneRecord PR.fileAppend(in);

	if(state<1){
	  state=1;
	}
      }
    }
  return state;
}
