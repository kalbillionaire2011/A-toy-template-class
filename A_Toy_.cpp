/*
 * A_Toy_.cpp
 *
 *  Created on: Mar 14, 2021
 *      Author: Colin Suarez White
 */

//Contents for ordPair.hpp



//Contents for Main.cpp

#include <iostream>
#include<string.h>
#include "ordPair.hpp"
using namespace std;

enum Gender {
  Male,
  Female
};

class TTPlayer {
  char* name;
  Gender gen;

  public :
  TTPlayer(const char* s, Gender g) {
    name = new char[sizeof(s)/sizeof(*s)];
    strcpy(name, s);
    gen = g;
  }

  TTPlayer(const TTPlayer& ttp) ;
  string toString() ;
  bool operatorLessthan(const TTPlayer& rhs) ;
  ~TTPlayer();
  TTPlayer(); //default constructor
};

//my Copy Constructor
TTPlayer:: TTPlayer(const TTPlayer& ttp) {
  name = ttp.name;
  gen = ttp.gen;
}

// my tostring
std::string TTPlayer:: toString() {
	char str[80];
  string s="";
  for(int i=0;i<sizeof(name)/sizeof(*name);i++)
    s+=name[i];
  if (gen==Male)
    return "Pair valid: (" + s+", Male" + " | " + ")";
  else
	  return "Pair valid: (" + s+ ", Female" + " | " + ")";
}
bool TTPlayer:: operatorLessthan(const TTPlayer &rhs) {
  return true;
}
//destructor
TTPlayer:: ~TTPlayer() {
  delete[] name;
}


