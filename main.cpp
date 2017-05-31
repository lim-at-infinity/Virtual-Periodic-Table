#include "PeriodicTable.h"

using namespace periodic;

int main()
{
	initializePeriodicTable();

	displayMainMenu();

	char input = getMainMenuInput();

	if (input == '4')
	{
		listAllElements();
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