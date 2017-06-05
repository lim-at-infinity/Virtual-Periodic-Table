#include "PeriodicTable.h"

using namespace periodic;

int main()
{
	initializePeriodicTable();

	char input;
	std::string currentSymbol;

	while (true)
	{
		if (menu == MAIN)
		{
			std::cout << "1. Search\n2. Add Element\n3. Remove Element\n4. Import Table\n5. Export Table\n6. View All\n";

			input = getNextInput('1', '6');

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
				menu = TABLE_IMPORT;
				break;
			case '5':
				menu = TABLE_EXPORT;
				break;
			case '6':
				menu = TABLE_LIST;
				break;
			}
		}
		else if (menu == TABLE_SEARCH)
		{
			currentSymbol = promptUserStr("Please Enter an Atomic Symbol to Search For", "CANCEL", MAIN); if (currentSymbol == "CANCEL") continue;

			ElementInfo *element = pt[currentSymbol];

			if (element != nullptr)
			{
				std::cout << "Element Name: " << element->element_name << std::endl;
				std::cout << "Atomic Symbol: " << currentSymbol << std::endl;
				std::cout << "Atomic Weight: " << element->atomic_weight << std::endl;
				std::cout << "Atomic Number: " << element->atomic_number << std::endl;

				menu = ELEMENT_OPTIONS;
			}
			else
			{
				std::cout << "Could Not Find an Element With the Symbol '" << currentSymbol << "'" << std::endl;
				menu = MAIN;
			}
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
			std::string symbol = promptUserStr("Please Enter an Element Symbol", "CANCEL", MAIN); if (symbol == "CANCEL") continue;

			ElementInfo *element = pt[symbol];

			if (element != nullptr)
			{
				std::cout << element->element_name << " Successfully Removed." << std::endl;

				pt.erase(symbol);
				delete element;
			}

			menu = MAIN;
		}
		else if (menu == TABLE_IMPORT)
		{
			std::string filePath = promptUserStr("Please Enter a File Path", "CANCEL", MAIN); if (filePath == "CANCEL") continue;

			pt.clear();

			importTable(filePath);

			std::cout << "Table Successfully Imported." << std::endl;

			menu = MAIN;
		}
		else if (menu == TABLE_EXPORT)
		{
			std::string filePath = promptUserStr("Please Enter a File Path", "CANCEL", MAIN); if (filePath == "CANCEL") continue;

			exportTable(filePath);

			std::cout << "Table Successfully Exported." << std::endl;

			menu = MAIN;
		}
		else if (menu == TABLE_LIST)
		{
			listAllElements();
			menu = MAIN;
		}
		else if (menu == ELEMENT_OPTIONS)
		{
			std::cout << "1. Edit\n2. Import\n3. Export\n4. Remove\n5. Return to Main\n";

			char input = getNextInput('1', '5');

			std::string file;
			ElementInfo *imported;

			switch (input)
			{
			case '1':

				menu = MAIN;
				break;
			case '2':

				file = promptUserStr("Please Enter a File to Import", "CANCEL", ELEMENT_OPTIONS); if (file == "CANCEL") continue;

				imported = importElement(file);

				std::cout << imported->element_name << " Successfully Imported." << std::endl;

				pt[currentSymbol] = imported;
				break;
			case '3':

				file = promptUserStr("Please Enter a File to Export", "CANCEL", ELEMENT_OPTIONS); if (file == "CANCEL") continue;

				exportElement(currentSymbol,file);

				std::cout << pt[currentSymbol]->element_name << " Successfully Exported." << std::endl;

				menu = MAIN;
				break;
			case '4':
				std::cout << pt[currentSymbol]->element_name << " Succesfully Removed." << std::endl;
				deleteElement(currentSymbol);

				menu = MAIN;
				break;
			case '5':
				menu = MAIN;
				break;
			}
		}
		else if (menu == ELEMENT_ADD)
		{
			std::string name;
			std::string symbol;

			double atomic_weight;
			double atomic_num;

			name = promptUserStr("Please Enter an Element Name", "CANCEL", TABLE_ADD);   if (name == "CANCEL") continue;
			symbol = promptUserStr("Please Enter an Atomic Symbol", "CANCEL", TABLE_ADD);  if (symbol == "CANCEL") continue;
			atomic_weight = promptUserDbl("Please Enter an Atomic Weight", "CANCEL", TABLE_ADD);  if (atomic_weight == _DMAX) continue;
			atomic_num = promptUserDbl("Please Enter an Atomic Number", "CANCEL", TABLE_ADD);  if (atomic_num == _DMAX) continue;

			ElementInfo *newElement = createElement(name, atomic_weight, atomic_num);

			pt[symbol] = newElement;

			std::cout << name << " Successfully Created." << std::endl;

			menu = MAIN;
		}
		else if (menu == ELEMENT_IMPORT)
		{
			//TODO import an element from a specified file.
			menu = MAIN;
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