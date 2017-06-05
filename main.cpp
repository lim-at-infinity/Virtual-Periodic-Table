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
			std::cout << "1. Add New\n2. Import From File\n";

			input = getNextInput('1', '2');

			switch (input)
			{
				case '1':
					menu = ELEMENT_ADD;
					break;
				case '2':
					menu = ELEMENT_IMPORT;
					break;
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
			//TODO add a new element based on user input.
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