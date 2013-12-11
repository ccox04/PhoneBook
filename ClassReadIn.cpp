
class contact{
	private:
		string firstName;
		string lastName;
		string phoneNum;
		string message;
	public:
		void setContact( string, string, string ); //make contact with input information
		void goTo( char letter ); //go to a letter in the phonebook
		void search( string name ); //search for either a first or last name, returns contact
		
}

void contact::setContact( firstName, lastName, phoneNum ){
	firstName = first;
	lastName = last;
	phoneNum = number;
}

//Chris is writing the search algorithms 

//The following is the code to read in from the terminal.
//I'm putting it in a makeshift main file for readability.
using std::cin;
using std::ifstream;

main(){
	contact c;
	int count = 0;
	//write to terminal
	message = "Input first Name: ";
	//read in first name
	contact.c(cin);
	first = cin;
	//get last name
	message = "Input last name: ";
	//read in last name
	contact.c(cin);
	last = cin;
	//get phone number
	message = "Input phone number: ";
	//read in phone number
	contact.c(cin);
	number = cin;
	//make sure phonenumber is valid (10 characters)
	while( *number ){
		count++;
	}
	if( count != 10 ){
		printf( "Invalid number, you put in %d numbers", count );
	}
}


