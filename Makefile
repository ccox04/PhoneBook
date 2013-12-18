all: Contact

Contact: Contact.o phonebook.o
	g++ Contact.o phonebook.o -o Contact
Contact.o: phonebook.h Contact.cpp
	g++ -c Contact.cpp
phonebook.o: phonebook.h phonebook.cpp
	g++ -c phonebook.cpp
clean:
	rm -rf *o Contact
