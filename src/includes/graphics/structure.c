/**
* Contains structs and functions for modifying the game world.
*
* @author Joel Denke      	mail@happyness.se
* @author Marcus Isaksson 	marcus.is@telia.com
* @date   12 april 2012
*/

#include <stdio.h>
#include "structure.h"

#ifndef _C_STRUCTURE
#define _C_STRUCTURE 

sType getType(char * data)
{
	
}

void * strToStruct(char * data)
{
	sType type = getType(data);
	
	switch (type) {
		case sPlayer:
		case sObject:
		case sCoordinate:
		case sAction:
		case sMessage:
			
			break;
			
	}
	
	return NULL;
}

char * structToStr(void * data, sType type)
{	
	switch (type) {
		case sPlayer:
		case sObject:
		case sCoordinate:
		case sAction:
		case sMessage:
			break;
			
	}
	
	return NULL;
}

#endif