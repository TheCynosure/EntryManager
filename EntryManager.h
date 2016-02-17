/*
 * EntryManager.h
 *
 *  Created on: Feb 16, 2016
 *      Author: Jack
 */

#ifndef ENTRYMANAGER_H_
#define ENTRYMANAGER_H_

#include <iostream>
#include <fstream>

namespace jab {

class EntryManager {
public:
	EntryManager();
	void createEntry();
	void displayEntries();
	virtual ~EntryManager();
private:
	//File that contains all of the entries.
	std::ofstream entries_write;
};

} /* namespace jab */

#endif /* ENTRYMANAGER_H_ */
