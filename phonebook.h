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
 */
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;
class PhoneRecord 
{
public:
  PhoneRecord(istream &input);
  //returns contact information
  string get_contact() const;

  //finds the correct contact and returns the info
  string search();

  //checks for correct formatting
  string Fsearch();

  //prints the contact based on user input.(-s,-a)
  void print_record();

  //loads the contact from search if it is in correct format
  void load_record();
  //Opens the phonebook.txt and prints each line
  void viewContacts();
private:
  	//name and phone number for contact variable
  string contact;
  
};
