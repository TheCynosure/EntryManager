/*
 * Main.cpp
 *
 *  Created on: Feb 16, 2016
 *      Author: Jack
 */

#include "EntryManager.h"
#include <limits>
#include <iostream>
#include <sstream>
#include <stdlib.h>

using namespace std;

const int option_num = 3;
const int ver_major = 1;
const int ver_minor = 0;
const int ver_patch = 0;
jab::EntryManager manager;


void displayProgramInfo() {
	cout << "Entry Editor 2016" << endl;
	stringstream ss;
	ss << "Version: " << ver_major << "." << ver_minor << ver_patch << "\n";
	cout << ss.str() << endl;
}

void promptUser() {
	cout << "1. Write Entry" << endl;
	cout << "2. Open Entries" << endl;
	cout << "3. Quit" << endl;
	cout << "Enter you selections number: " << endl;
}

int takeInput() {
	int user_input = 0;
	cin >> user_input;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return user_input;
}

void processInput() {
	int user_input = 0;
	//When the user hits case 3 the function will auto quit.
	while(true) {
		while(user_input < 1 || user_input > option_num) {
			promptUser();
			user_input = takeInput();
		}
		switch(user_input) {
			case 1:
				//Make the Entry Manager add an entry
				manager.createEntry();
				user_input = 0;
				break;
			case 2:
				//make the Entry Manager display all of the entry dates.
				manager.displayEntries();
				user_input = 0;
				break;
			case 3:
				//Program exit;
				return;
		}
	}
}

int main() {
	displayProgramInfo();
	processInput();
	return 0;
}


