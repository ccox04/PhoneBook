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
#include <iostream>
#include <string>
#include <boost/regex.hpp>

using namespace std;

int PhoneRecord::search(istream& input) {
 boost::regex Pnumber;
    try {
        Pnumber = boost::regex("[2-9][0-9]{2}[-.)]?[2-9][0-9]{2}[-.]?[0-9]{4}");
    } catch (boost::regex_error e) {
        cerr << "Regex error: " << e.what() << endl;
        exit(1);
    }
 boost::regex Fname;
    try {
        Fname = boost::regex("[A-Z][a-z]?[ ]");
    } catch (boost::regex_error e) {
        cerr << "Regex error: " << e.what() << endl;
        exit(1);
    }

 boost::regex Lname;
    try {
        Lname = boost::regex("[ ][A-Z][a-z]?");
    } catch (boost::regex_error e) {
        cerr << "Regex error: " << e.what() << endl;
        exit(1);
    }
    string line;

    while(getline(input, line)) {
        string matches = " does not match ";
        if (boost::regex_match(line, Pnumber, Fname, Lname)) {
            matches = " matches ";
        }
        cout << Pnumber <<" "<<Fname<<" "<<Lname<< matches << line << endl;
    }
}

PhoneRecord::PhoneRecord(istream &input){
	contact=search(input);
}

string PhoneRecord::get_first_name() const{
return Fname;
}
string PhoneRecord::get_last_name() const{
return Lname
}
string PhoneRecord::get_phone_num() const{
return Pnumber
}