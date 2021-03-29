/*
 * ordPair.hpp
 *
 *  Created on: Mar 22, 2021
 *      Author: kal_macs
 */
#include <iostream>
#include<string.h>
#include "ordPair.hpp"
#include "A_Toy_.cpp"
#ifndef ORDPAIR_HPP_
#define ORDPAIR_HPP_
class OrdPair {
  int first, second;

  public :
  OrdPair(int f, int s) {
    if (f >= s) {
      throw std::invalid_argument("First should be less than second!");
    }
    else {
      first = f;
      second = s;
    }
  }
  std ::string toString();
  bool operatorEqual() ;
  void setFirst(int f);
  void setSecond(int s);
  int getFirst();
  int getSecond();
};




#endif /* ORDPAIR_HPP_ */



	std::string OrdPair:: toString() {
  return to_string(first)+" | "+to_string(second);
}
bool OrdPair:: operatorEqual() {
  if (first == second)
    return true;
  else
    return false;
}
void OrdPair:: setFirst(int f) {
  if (f<second)
    first = f;
  else
    throw std::invalid_argument("First should be less than second!");
}
void OrdPair:: setSecond(int s) {
  if (first<s)
    second = s;
  else
    throw std::invalid_argument("First should be less than second!");
}
int OrdPair:: getFirst() {
  return first;
}
int OrdPair:: getSecond() {
  return second;
}

