/*
 * ============================================================================
 *
 *       Filename:  phonebook.cpp
 *
 *    Description:  cpp file for phonebook.cpp
 *
 *         Author:  Christopher Cox, Ryan Diluoffo, Kara Dodenhoff
 *
 * ============================================================================
 */
#include "phonebook.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <boost/regex.hpp>
#include <iomanip>

using namespace std;

//This is the contructor
PhoneRecord::PhoneRecord()
{
  contact = "Doe_John_540-231-1500";
}

//This appends a file
void PhoneRecord::fileAppend(istream &input) {
 ofstream outfile;
  outfile.open("phonebook.txt", ios_base::app);
  outfile<<input;
}

//This appends what the user typed in
void PhoneRecord::cinAppend(string contact) {
 ofstream outfile;
     outfile.open("phonebook.txt", ios_base::app);
     outfile << contact << "\n";
}

//This returns the contact
string PhoneRecord::get_contact() const{
return contact;
}

//This is to view a list of all contacts
void PhoneRecord::viewContacts(){
  fstream Phonebook("phonebook.txt", fstream::in);
  string currentLine;
  while (!Phonebook.eof())
  {
    getline(Phonebook, currentLine);
    cout << currentLine << endl;
  }
}

//This is to search through the list for a particular contact
void PhoneRecord::search(string contacts)
{
  int index;
  string line;
  ifstream searchfile;
  searchfile.open("phonebook.txt");
  while(!searchfile.eof())
    {
      getline(searchfile,line);
      if((index = line.find(contacts,0)) != string::npos)
	{
	  cout << "The contact(s) you searched for are: \n" << endl;
	  cout << contacts << endl;
	}
    }
}
