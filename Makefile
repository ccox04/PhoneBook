all: phonebook

phonebook: Contact.o phonebook.o
	g++ Contact.o phonebook.o -o phonebook
Contact.o: Contact.cpp
	g++ -c Contact.cpp
phonebook.0: phonebook.cpp
	g++ -c phonebook.cpp
clean:
	rm -rf *o phonebook