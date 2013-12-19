PhoneBook
contributors: kdody, diluoffo, ccox04

url: https://github.com/ccox04/PhoneBook 

Description
We are writing a program that will take in records and sort them back for the user.  It will have a user input which contact they desire, sort through the list. Then output the intended contact.

Philosophy
We plan on using the unix philosphy of modularity.  This will be a key point in our project because we would like to build something that is reuseable.

Usage
To run our program simply do the following steps:
   - Type in the command line: make clean
   - Type in the command line: make
   - Type in the command line: ./Contact
   - Follow the on screen prompt instructions.
A couple things to keep in mind while using the program:
  -When adding a new Contact after you type: add
  	-A new line will appear where you should type in the contacts information.
  -To add multiple contacts.  The user must type add in after every contact.
      -EX: add
      -	   Doe_John_540-231-1500
      -	   add
      -	   Smith_John_320-234-5430
  -When searching for a contact the user must input the full contacts information for it to appear.
      -EX: search
      -    Doe_John_540-231-1500
