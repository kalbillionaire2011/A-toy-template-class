/*
 * Main.cpp
 *
 *  Created on: Mar 22, 2021
 *      Author: kal_macs
 */
#include <iostream>
#include<string.h>
#include "A_Toy_.cpp"
#include "ordPair.hpp"
using namespace std;

int main(){
		TTPlayer Players [] = {
			{"Player1", Gender::male},
			{"Player2", Gender::female},
			{"Player3", Gender::male},
			{"Player4", Gender::female},
			{"Player5", Gender::male}
	};
	for(int i =0; i < 11; i++)
			Players[i];

cout << Players.TTPlayer ::toString() << endl;

	return 0;
}

