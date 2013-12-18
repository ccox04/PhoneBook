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

PhoneRecord::PhoneRecord()
{
  contact = "Doe John 540-231-1500";
}

void PhoneRecord::fileAppend(istream &input) {
std:ofstream outfile;
outfile.open("phonebook.txt", std::ios_base::app);
outfile<<input;

}

void PhoneRecord::cinAppend(string contact) {
std:ofstream outfile;
outfile.open("phonebook.txt", std::ios_base::app);
outfile << contact;


}
//PhoneRecord::PhoneRecord(istream &input){
  // contact=search(input);
//PhoneRecord::PhoneRecord(){
//}

string PhoneRecord::get_contact() const{
return contact;
}


void PhoneRecord::viewContacts(){
  fstream Phonebook("phonebook.txt", fstream::in);
  string currentLine;
  while (!Phonebook.eof())
  {
    getline(Phonebook, currentLine);
    cout << currentLine << endl;
  }
}

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
