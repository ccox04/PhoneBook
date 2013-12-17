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
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <boost/regex.hpp>

using namespace std;

int PhoneRecord::fileAppend(istream& input) {
std:ifstream inputfile(input);
std:ofstream outfile;
outfile.open("phonebook.txt", std::ios_base::app);
outfile<<inputfile;

}

int PhoneRecord::cinAppend(istream& input) {
std:ofstream outfile;
outfile.open("phonebook.txt", std::ios_base::app);
outfile<<cin;

}
PhoneRecord::PhoneRecord(istream &input){
	contact=search(input);
}

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
