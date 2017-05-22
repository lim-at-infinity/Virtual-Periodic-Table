#include <iostream>
#include <fstream>
#include <string>
#include <map>

namespace periodic
{
	struct ElementInfo
	{
		std::string element_name;
		double atomic_weight;
		int atomic_number;

		ElementInfo() {}
		ElementInfo(const std::string& name, double weight, int number) : element_name(name), atomic_weight(weight), atomic_number(number) {}
	};

	typedef std::map<std::string, ElementInfo> PeriodicTable;

	const std::string SEP = " ";

	/*Output stream for save file.*/
	std::ofstream fileOut;

	/*Input stream for save file.*/
	std::ifstream fileIn;

}

using namespace periodic;

int main()
{
	PeriodicTable pt;
	pt["H"] = ElementInfo("Hydrogen", 1.00794, 1);
	pt["He"] = ElementInfo("Helium", 4.002602, 2);
	pt["Li"] = ElementInfo("Lithium", 6.941, 3);
	pt["Be"] = ElementInfo("Beryllium", 9.012182, 4);
	pt["B"] = ElementInfo("Boron", 10.811, 5);
	pt["C"] = ElementInfo("Carbon", 12.0107, 6);
	pt["N"] = ElementInfo("Nitrogen", 14.0067, 7);
	pt["O"] = ElementInfo("Oxygen", 15.9994, 8);
	pt["F"] = ElementInfo("Flourine", 18.9984032, 9);
	pt["Ne"] = ElementInfo("Neon", 20.1797, 10);
	pt["Na"] = ElementInfo("Sodium", 22.98976928, 11);
	pt["Mg"] = ElementInfo("Magnesium", 24.3050, 12);
	pt["Al"] = ElementInfo("Aluminium", 26.9815386, 13);
	pt["Si"] = ElementInfo("Silicon", 28.0855, 14);
	pt["P"] = ElementInfo("Phosphorus", 30.973762, 15);
	pt["S"] = ElementInfo("Sulfur", 32.065, 16);
	pt["Cl"] = ElementInfo("Chlorine", 35.453, 17);
	pt["Ar"] = ElementInfo("Argon", 39.948, 18);
	pt["K"] = ElementInfo("Potassium", 39.0983, 19);
	pt["Ca"] = ElementInfo("Calcium", 40.078, 20);
	pt["Sc"] = ElementInfo("Scandium", 44.955912, 21);
	pt["Ti"] = ElementInfo("Titanium", 47.867, 22);
	pt["V"] = ElementInfo("Vanadium", 50.9415, 23);
	pt["Cr"] = ElementInfo("Chromium", 51.9961, 24);
	pt["Mn"] = ElementInfo("Maganese", 54.938045, 25);
	pt["Fe"] = ElementInfo("Iron", 55.845, 26);
	pt["Co"] = ElementInfo("Cobalt", 58.933195, 27);
	pt["Ni"] = ElementInfo("Nickel", 58.6934, 28);
	pt["Cu"] = ElementInfo("Copper", 63.546, 29);
	pt["Zn"] = ElementInfo("Zinc", 65.38, 30);
	pt["Ga"] = ElementInfo("Gallium", 69.723, 31);
	pt["Ge"] = ElementInfo("Germanium", 72.64, 32);
	pt["As"] = ElementInfo("Arsenic", 74.92160, 33);
	pt["Se"] = ElementInfo("Selenium", 79.96, 34);
	pt["Br"] = ElementInfo("Bromine", 79.904, 35);
	pt["Kr"] = ElementInfo("Krypton", 83.798, 36);
	pt["Rb"] = ElementInfo("Rubidium", 85.4678, 37);
	pt["Sr"] = ElementInfo("Strontium", 87.62, 38);
	pt["Y"] = ElementInfo("Yttrium", 88.90586, 39);
	pt["Zr"] = ElementInfo("Zirconium", 91.224, 40);
	pt["Nb"] = ElementInfo("Niobium", 92.90638, 41);
	pt["Mo"] = ElementInfo("Molybdenum", 95.96, 42);
	pt["Tc"] = ElementInfo("Technetium", 97.9072, 43);
	pt["Ru"] = ElementInfo("Ruthenium", 101.07, 44);
	pt["Rh"] = ElementInfo("Rhodium", 102.90550, 45);
	pt["Pd"] = ElementInfo("Palladium", 106.42, 46);
	pt["Ag"] = ElementInfo("Silver", 107.8682, 47);
	pt["Cd"] = ElementInfo("Cadmium", 112.411, 48);
	pt["In"] = ElementInfo("Indium", 114.818, 49);
	pt["Sn"] = ElementInfo("Tin", 118.710, 50);
	pt["Sb"] = ElementInfo("Antimony", 121.760, 51);
	pt["Te"] = ElementInfo("Tellurium", 127.60, 52);
	pt["I"] = ElementInfo("Iodine", 126.90447, 53);
	pt["Xe"] = ElementInfo("Xenon", 131.293, 54);
	pt["Cs"] = ElementInfo("Caesium", 132.9054519, 55);
	pt["Ba"] = ElementInfo("Barium", 137.327, 56);
	pt["La"] = ElementInfo("Lanthum", 138.90527, 57);
	pt["Ce"] = ElementInfo("Cerium", 140.116, 58);
	pt["Pr"] = ElementInfo("Praeseodymium", 140.90765, 59);
	pt["Nd"] = ElementInfo("Neodymium", 144.242, 60);
	pt["Pm"] = ElementInfo("Promethium", 145, 61);
	pt["Sm"] = ElementInfo("Samarium", 150.36, 62);
	pt["Eu"] = ElementInfo("Europium", 151.964, 63);
	pt["Gd"] = ElementInfo("Gadolinium", 157.25, 64);
	pt["Tb"] = ElementInfo("Teribium", 158.92535, 65);
	pt["Dy"] = ElementInfo("Dysprosium", 162.5, 66);
	pt["Ho"] = ElementInfo("Holmium", 164.93032, 67);
	pt["Er"] = ElementInfo("Erbium", 167.259, 68);
	pt["Tm"] = ElementInfo("Thulium", 168.93421, 69);
	pt["Yb"] = ElementInfo("Ytterbium", 173.054, 70);
	pt["Lu"] = ElementInfo("Lutetium", 174.9668, 71);
	pt["Hf"] = ElementInfo("Hafnium", 178.49, 72);
	pt["Ta"] = ElementInfo("Tantalum", 180.94788, 73);
	pt["W"] = ElementInfo("Tungsten", 183.84, 74);
	pt["Re"] = ElementInfo("Rhenium", 186.207, 75);
	pt["Os"] = ElementInfo("Osmium", 190.23, 76);
	pt["Ir"] = ElementInfo("Iridium", 192.217, 77);
	pt["Pt"] = ElementInfo("Platinum", 195.084, 78);
	pt["Au"] = ElementInfo("Gold", 196.966569, 79);
	pt["Hg"] = ElementInfo("Mercury", 1.00794, 80);
	pt["Ti"] = ElementInfo("Thallium", 204.3833, 81);
	pt["Pb"] = ElementInfo("Lead", 207.2, 82);
	pt["Bi"] = ElementInfo("Bismuth", 208.98040, 83);
	pt["Po"] = ElementInfo("Polonium", 208.9824, 84);
	pt["At"] = ElementInfo("Astatine", 209.9871, 85);
	pt["Rn"] = ElementInfo("Radon", 222.0176, 86);
	pt["Fr"] = ElementInfo("Francium", 233, 87);
	pt["Ra"] = ElementInfo("Radium", 226, 88);
	pt["Ac"] = ElementInfo("Actinium", 227, 89);
	pt["Th"] = ElementInfo("Thorium", 232.03806, 90);
	pt["Pa"] = ElementInfo("Protactinium", 231.03588, 91);
	pt["U"] = ElementInfo("Uranium", 238.02891, 92);
	pt["Np"] = ElementInfo("Neptunium", 237, 93);
	pt["Pu"] = ElementInfo("Plutonium", 244, 94);
	pt["Am"] = ElementInfo("Americium", 243, 95);
	pt["Cm"] = ElementInfo("Curium", 247, 96);
	pt["Bk"] = ElementInfo("Berkelium", 247, 97);
	pt["Cf"] = ElementInfo("Californium", 251, 98);
	pt["Es"] = ElementInfo("Einsteinium", 252, 99);
	pt["Fm"] = ElementInfo("Fermium", 257, 100);
	pt["Md"] = ElementInfo("Mendelevium", 258, 101);
	pt["No"] = ElementInfo("Nobellium", 259, 102);
	pt["Lr"] = ElementInfo("Lawrencium", 262, 103);
	pt["Rf"] = ElementInfo("Rutherfordium", 261, 104);
	pt["Db"] = ElementInfo("Dubnium", 262, 105);
	pt["Sg"] = ElementInfo("Seaborgium", 266, 106);
	pt["Bh"] = ElementInfo("Borium", 264, 107);
	pt["Hs"] = ElementInfo("Hassium", 277, 108);
	pt["Mt"] = ElementInfo("Meitnerium", 268, 109);
	pt["Ds"] = ElementInfo("Darmstadtium", 271, 110);
	pt["Rg"] = ElementInfo("Roentgenium", 272, 111);
	pt["Cn"] = ElementInfo("Copernicium", 285, 112);
	pt["Uut"] = ElementInfo("Ununtrium", 284, 113);
	pt["Fl"] = ElementInfo("Flerovium", 289, 114);
	pt["Uup"] = ElementInfo("Ununpentium", 288, 115);
	pt["Lv"] = ElementInfo("Livermorium", 292, 116);
	pt["Uus"] = ElementInfo("Ununseptium", 294, 117);
	pt["Uuo"] = ElementInfo("Ununoctium", 294, 118);

	fileOut.open("save.txt", std::ios::out | std::ios::trunc);

	PeriodicTable::iterator it = pt.begin();//pt.find("H");
	while (it != pt.end())
	{
		ElementInfo el = it->second;

		fileOut << it->first << SEP << el.element_name << SEP << el.atomic_weight << SEP << el.atomic_number << std::endl;

		it++;
	}

	fileOut.close();

	return 0;
}