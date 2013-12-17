#include "phonebook.h"
#include <err.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
using std::ifstream;
using std::cin;



int main(int argc, char* argv[])
{

  if(argc<=0)
    {
      PhoneRecord PR.cinAppend(cin);


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
	PhoneRecord PR.fileAppend(in);

	if(state<1){
	  state=1;
	}
      }
    }
  return state;
}
