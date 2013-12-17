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

/*This is to be ignored. File from Darren for Chris Cox
 */
/*
 * ============================================================================
 *
 *       Filename:  record_example.cpp
 *
 *    Description:  
 *
 *         Author:  Darren Maczka (dkm), dmaczka@hazyblue.me
 *
 * ============================================================================
 */

class PhoneRecord {
public:
  PhoneRecord();
  // getters and setters for all private variables
  //
  std::string first_name() const;

private:
  string fname;
  string lname;
  int phone_number;
}

#include <vector>
#include <algorithm>

/*
struct search_predicate {
search_redicate(const std::string& ss) : search_string(ss) {};

bool operator()(const PhoneRecord& record) {
return (record.first_name().find(search_string) != std::string::npos)
}
string search_string;
}*/
/*
  void print_record(const PhoneRecord& record, bool detailed) {
    //if detailed, print a detailed outut for record
    //else print a summary of record
  }

int main() {
  std::vector<PhoneRecord> records;

  records = load_records("phone_records.txt")

    std::vector<PhoneRecord> found;

  std::string search_string = "a";

  mypred = search_predicate(search_string);

  //found = std::copy_if(records.begin(), records.end(), std::back_insert_iterator<std::vector<PhoneRecord> >, mypred);


  for ( auto record : records ) {
    if record.first_name().find(search_string) != std::string::npos) {
    found.push_back(record)
      }
}}
*/
