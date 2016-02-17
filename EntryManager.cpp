/*
 * EntryManager.cpp
 *
 *  Created on: Feb 16, 2016
 *      Author: Jack
 */

#include "EntryManager.h"
#include <fstream>
#include <ctime>
#include <sstream>

using namespace std;

namespace jab {

EntryManager::EntryManager() {
	// TODO Auto-generated constructor stub
	entries_write.open("Entries.txt", ios::app);
}

void EntryManager::createEntry() {
	//Placing the date in the file.
	entries_write << __DATE__ << endl;
	//Prompting the user
	cout << "Enter you entry: " << endl;
	//Getting their input
	string entry;
	getline(cin, entry, '\n');
	//Adding the input to the file.
	entries_write << ">" << entry << endl;
}

void EntryManager::displayEntries() {
	ifstream file;
	file.open("Entries.txt");
	cout << endl << "Entries: " << endl;
	string line;
	while(getline(file, line)) {
		cout << line << endl;
	}
	cout << endl;
}


EntryManager::~EntryManager() {
	// TODO Auto-generated destructor stub
	cout << "\nClosing up the entry file..." << endl;
	entries_write.close();
}

} /* namespace jab */
