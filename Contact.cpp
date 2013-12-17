#include "phonebook.h"
#include <err.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
using std::ifstream;
using std::cin;

int usage( FILE* fpo, int state){
fprintf(fpo,"Usage: Contact [OPTION] [FILE]...\n"
				"\n"
				"Options:\n"
				"\t-s searches the phonebook for a specific person\n"
				"\t-a opens the entire phonebook\n"
				"\t-h display this help message\n");
exit(state);
}

int main(int argc, char* argv[])
{
    
	int opt,quiet;
	quiet=0;
	int state=0;
	extern int optind;
	while((opt=getopt(argc,argv,"sah")) != -1){
 		switch (opt) {
 			case 'q':
     				quiet = 1;
     				break;
 			case 'h':
     				usage(stdout, 0);
     				break;
 			default: /* '?' */
     			usage(stderr,3);
     			}
 	}
	argc -= optind;
	argv += optind;
	if(argc<=0)
	{
		PhoneRecord PR(cin);
		

	}
	for(int i=0;i<argc;i++)
	{
		ifstream in( argv[i]);
		if (!in.is_open())
		{
			warn("%s: error message", argv[i]);//error opening *argv
			if(state<2){
				state=2;
			}
		}
		else{
		PhoneRecord PR(in);
		
			if(state<1){
				state=1;
			}		
		}
	}
	return state;
}
