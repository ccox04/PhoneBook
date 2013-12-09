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
  string first_name() const;
  //returns last name
  string last_name() const;
  //return phone number
  string phone_num() const;
  //finds the correct contact and returns the info
  string search();
  //prints the contact record
  void print_record();
  //loads the contact record from input file or cin
  void load_record();

private:
  //first name variable
	string Fname;
	//last name variable
	string Lname;
	//phone number variable
	string Pnumber;
};
