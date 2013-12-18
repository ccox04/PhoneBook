/*
 * ============================================================================
 *
 *       Filename:  phonebook.h
 *
 *    Description:  header file for phonebook.cpp
 *
 *         Author:  Christopher Cox, Ryan Diluoffo, Kara Dodenhoff
 *
 * ============================================================================
 *
*/
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;
class PhoneRecord 
{
 public:
  //contructor
  //PhoneRecord(istream &input);
  PhoneRecord();
  //appends the current text file
  void fileAppend(istream &input);
  //appends to the current file via cin
  //(istream &input)
  int cinAppend(string contact);
  //returns contact information
  string get_contact() const;

  //finds the correct contact information
  void search(string contact);

  //Opens the phonebook.txt and prints each line
  void viewContacts();
 private:
  	//name and phone number for contact variable
  string contact;
  
};
