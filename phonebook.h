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
  //returns first name
  string get_first_name() const;
  //returns last name
  string get_last_name() const;
  //return phone number
  string get_phone_num() const;
  //returns first name
  string first_name() const;

  //returns last name
  string last_name() const;

  //return phone number
  string phone_num() const;

  //finds the correct contact and returns the info
  string search();

  //checks for correct formatting
  string Fsearch();

  //prints the contact based on user input.(-s,-a)
  void print_record();

  //loads the contact from search if it is in correct format
  void load_record();

private:
  	//first name variable
	string Fname;

	//last name variable
	string Lname;

	//phone number variable
	string Pnumber;
};
