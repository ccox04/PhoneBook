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
/*
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
*/
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
	}

	// found now contains 0 or more records that matched the search string
	if (found.size() == 1) {
		print_record(found[0], true);
	} else {
		for ( auto record : found ) {
			print_record(record, false);
		}
	}
	
}
