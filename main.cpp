#include "PeriodicTable.h"

using namespace periodic;

int main()
{
	initializePeriodicTable();

	char input;

	while (true)
	{
		if (menu == MAIN)
		{
			displayMainMenu();

			input = getNextInput('1', '5');

			switch (input)
			{
				case '1':
					menu = TABLE_SEARCH;
					break;
				case '2':
					menu = TABLE_ADD;
					break;
				case '3':
					menu = TABLE_REMOVE;
					break;
				case '4':
					menu = TABLE_EXPORT;
					break;
				case '5':
					menu = TABLE_LIST;
					break;
			}
		}
		else if (menu == TABLE_SEARCH)
		{
			std::cout << "Search for: ";
		}
		else if (menu == TABLE_ADD)
		{
			std::cout << "1. Add New\n2. Import From File\n3. Cancel\n";

			input = getNextInput('1', '3');

			switch (input)
			{
				case '1':
					menu = ELEMENT_ADD;
					break;
				case '2':
					menu = ELEMENT_IMPORT;
					break;
				case '3':
					menu = MAIN;
			}
		}
		else if (menu == TABLE_REMOVE)
		{
			std::cout << "Please Enter an Element Name: ";

			//TODO kill the specified element.
		}
		else if (menu == TABLE_EXPORT)
		{
			std::cout << "Please Enter a Filepath: ";

			//TODO save the current table to a specified file.
		}
		else if (menu == TABLE_LIST)
		{
			listAllElements();
			menu = MAIN;
		}
		else if (menu == ELEMENT_ADD)
		{
			std::string name;
			std::string symbol;

			double atomic_weight;
			double atomic_num;

			name          = subMenuPromptStr("Please Enter an Element Name", "CANCEL", TABLE_ADD);   if (name == "CANCEL") continue;
			symbol        = subMenuPromptStr("Please Enter an Atomic Symbol", "CANCEL", TABLE_ADD);  if (symbol == "CANCEL") continue;
			atomic_weight = subMenuPromptDbl("Please Enter an Atomic Weight", "CANCEL", TABLE_ADD);  if (atomic_weight == _DMAX) continue;
			atomic_num    = subMenuPromptDbl("Please Enter an Atomic Number", "CANCEL", TABLE_ADD);  if (atomic_num == _DMAX) continue;

			ElementInfo *newElement = createElement(name, atomic_weight, atomic_num);

			pt[symbol] = newElement;

			std::cout << name << " Successfully Created." << std::endl;

			menu = MAIN;
		}
		else if (menu == ELEMENT_IMPORT)
		{
			//TODO import an element from a specified file.
		}
	}

	fileOut.open("save.txt", std::ios::out | std::ios::trunc);

	/*PeriodicTable::iterator it = pt.begin();//pt.find("H");
	while (it != pt.end())
	{
		ElementInfo el = it->second;

		fileOut << it->first << SEP << el.element_name << SEP << el.atomic_weight << SEP << el.atomic_number << std::endl;

		it++;
	}*/

	fileOut.close();

	return 0;
}