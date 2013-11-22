#!/bin/sh

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() {
	
	read text;

	tr ':' ' ' <text >output;

	echo output;

}
