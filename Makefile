CXX := g++
CXX_FLAGS := -Wall -Wextra -g -std=c++11
CXX_LIBS := -l boost_regex

CC := gcc
CC_FLAGS := -Wall -Wextra -g -pedantic -D_XOPEN_SOURCE=700

all: boost_regex c_regex

boost_regex: Contact.o
	$(CXX) $(CXX_FLAGS) $(CXX_LIBS) -o $@ $^ 

c_regex: regex_test_c.o
	$(CC) $(CC_FLAGS) -o $@ $^

%_c.o : %_c.c
	$(CC) $(CC_FLAGS) -c -o $@ $<

%_boost.o : %_boost.cpp
	$(CXX) $(CXX_FLAGS) -c -o $@ $<

.PHONY: clean
clean:
	- rm -f *.o boost_regex c_regex
