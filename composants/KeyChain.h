#pragma once
#ifndef KEY_CHAIN_H
#define KEY_CHAIN_H



#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class KeyChain {
public:
	 KeyChain(string private_key, string public_key);
	 void save();
	string private_key;
	string public_key;
};
#endif