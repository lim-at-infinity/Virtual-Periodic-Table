#pragma once

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

	typedef std::map<std::string, ElementInfo*> PeriodicTable;

	const std::string SEP = " ";

	PeriodicTable pt;

	/*Output stream for save file.*/
	std::ofstream fileOut;

	/*Input stream for save file.*/
	std::ifstream fileIn;

	void initializePeriodicTable()
	{
		pt[" "] = new ElementInfo("", NULL, NULL);
		pt["H"] = new ElementInfo("Hydrogen", 1.00794, 1);
		pt["He"] = new ElementInfo("Helium", 4.002602, 2);
		pt["Li"] = new ElementInfo("Lithium", 6.941, 3);
		pt["Be"] = new ElementInfo("Beryllium", 9.012182, 4);
		pt["B"] = new ElementInfo("Boron", 10.811, 5);
		pt["C"] = new ElementInfo("Carbon", 12.0107, 6);
		pt["N"] = new ElementInfo("Nitrogen", 14.0067, 7);
		pt["O"] = new ElementInfo("Oxygen", 15.9994, 8);
		pt["F"] = new ElementInfo("Flourine", 18.9984032, 9);
		pt["Ne"] = new ElementInfo("Neon", 20.1797, 10);
		pt["Na"] = new ElementInfo("Sodium", 22.98976928, 11);
		pt["Mg"] = new ElementInfo("Magnesium", 24.3050, 12);
		pt["Al"] = new ElementInfo("Aluminium", 26.9815386, 13);
		pt["Si"] = new ElementInfo("Silicon", 28.0855, 14);
		pt["P"] = new ElementInfo("Phosphorus", 30.973762, 15);
		pt["S"] = new ElementInfo("Sulfur", 32.065, 16);
		pt["Cl"] = new ElementInfo("Chlorine", 35.453, 17);
		pt["Ar"] = new ElementInfo("Argon", 39.948, 18);
		pt["K"] = new ElementInfo("Potassium", 39.0983, 19);
		pt["Ca"] = new ElementInfo("Calcium", 40.078, 20);
		pt["Sc"] = new ElementInfo("Scandium", 44.955912, 21);
		pt["Ti"] = new ElementInfo("Titanium", 47.867, 22);
		pt["V"] = new ElementInfo("Vanadium", 50.9415, 23);
		pt["Cr"] = new ElementInfo("Chromium", 51.9961, 24);
		pt["Mn"] = new ElementInfo("Maganese", 54.938045, 25);
		pt["Fe"] = new ElementInfo("Iron", 55.845, 26);
		pt["Co"] = new ElementInfo("Cobalt", 58.933195, 27);
		pt["Ni"] = new ElementInfo("Nickel", 58.6934, 28);
		pt["Cu"] = new ElementInfo("Copper", 63.546, 29);
		pt["Zn"] = new ElementInfo("Zinc", 65.38, 30);
		pt["Ga"] = new ElementInfo("Gallium", 69.723, 31);
		pt["Ge"] = new ElementInfo("Germanium", 72.64, 32);
		pt["As"] = new ElementInfo("Arsenic", 74.92160, 33);
		pt["Se"] = new ElementInfo("Selenium", 79.96, 34);
		pt["Br"] = new ElementInfo("Bromine", 79.904, 35);
		pt["Kr"] = new ElementInfo("Krypton", 83.798, 36);
		pt["Rb"] = new ElementInfo("Rubidium", 85.4678, 37);
		pt["Sr"] = new ElementInfo("Strontium", 87.62, 38);
		pt["Y"] = new ElementInfo("Yttrium", 88.90586, 39);
		pt["Zr"] = new ElementInfo("Zirconium", 91.224, 40);
		pt["Nb"] = new ElementInfo("Niobium", 92.90638, 41);
		pt["Mo"] = new ElementInfo("Molybdenum", 95.96, 42);
		pt["Tc"] = new ElementInfo("Technetium", 97.9072, 43);
		pt["Ru"] = new ElementInfo("Ruthenium", 101.07, 44);
		pt["Rh"] = new ElementInfo("Rhodium", 102.90550, 45);
		pt["Pd"] = new ElementInfo("Palladium", 106.42, 46);
		pt["Ag"] = new ElementInfo("Silver", 107.8682, 47);
		pt["Cd"] = new ElementInfo("Cadmium", 112.411, 48);
		pt["In"] = new ElementInfo("Indium", 114.818, 49);
		pt["Sn"] = new ElementInfo("Tin", 118.710, 50);
		pt["Sb"] = new ElementInfo("Antimony", 121.760, 51);
		pt["Te"] = new ElementInfo("Tellurium", 127.60, 52);
		pt["I"] = new ElementInfo("Iodine", 126.90447, 53);
		pt["Xe"] = new ElementInfo("Xenon", 131.293, 54);
		pt["Cs"] = new ElementInfo("Caesium", 132.9054519, 55);
		pt["Ba"] = new ElementInfo("Barium", 137.327, 56);
		pt["La"] = new ElementInfo("Lanthum", 138.90527, 57);
		pt["Ce"] = new ElementInfo("Cerium", 140.116, 58);
		pt["Pr"] = new ElementInfo("Praeseodymium", 140.90765, 59);
		pt["Nd"] = new ElementInfo("Neodymium", 144.242, 60);
		pt["Pm"] = new ElementInfo("Promethium", 145, 61);
		pt["Sm"] = new ElementInfo("Samarium", 150.36, 62);
		pt["Eu"] = new ElementInfo("Europium", 151.964, 63);
		pt["Gd"] = new ElementInfo("Gadolinium", 157.25, 64);
		pt["Tb"] = new ElementInfo("Teribium", 158.92535, 65);
		pt["Dy"] = new ElementInfo("Dysprosium", 162.5, 66);
		pt["Ho"] = new ElementInfo("Holmium", 164.93032, 67);
		pt["Er"] = new ElementInfo("Erbium", 167.259, 68);
		pt["Tm"] = new ElementInfo("Thulium", 168.93421, 69);
		pt["Yb"] = new ElementInfo("Ytterbium", 173.054, 70);
		pt["Lu"] = new ElementInfo("Lutetium", 174.9668, 71);
		pt["Hf"] = new ElementInfo("Hafnium", 178.49, 72);
		pt["Ta"] = new ElementInfo("Tantalum", 180.94788, 73);
		pt["W"] = new ElementInfo("Tungsten", 183.84, 74);
		pt["Re"] = new ElementInfo("Rhenium", 186.207, 75);
		pt["Os"] = new ElementInfo("Osmium", 190.23, 76);
		pt["Ir"] = new ElementInfo("Iridium", 192.217, 77);
		pt["Pt"] = new ElementInfo("Platinum", 195.084, 78);
		pt["Au"] = new ElementInfo("Gold", 196.966569, 79);
		pt["Hg"] = new ElementInfo("Mercury", 1.00794, 80);
		pt["Ti"] = new ElementInfo("Thallium", 204.3833, 81);
		pt["Pb"] = new ElementInfo("Lead", 207.2, 82);
		pt["Bi"] = new ElementInfo("Bismuth", 208.98040, 83);
		pt["Po"] = new ElementInfo("Polonium", 208.9824, 84);
		pt["At"] = new ElementInfo("Astatine", 209.9871, 85);
		pt["Rn"] = new ElementInfo("Radon", 222.0176, 86);
		pt["Fr"] = new ElementInfo("Francium", 233, 87);
		pt["Ra"] = new ElementInfo("Radium", 226, 88);
		pt["Ac"] = new ElementInfo("Actinium", 227, 89);
		pt["Th"] = new ElementInfo("Thorium", 232.03806, 90);
		pt["Pa"] = new ElementInfo("Protactinium", 231.03588, 91);
		pt["U"] = new ElementInfo("Uranium", 238.02891, 92);
		pt["Np"] = new ElementInfo("Neptunium", 237, 93);
		pt["Pu"] = new ElementInfo("Plutonium", 244, 94);
		pt["Am"] = new ElementInfo("Americium", 243, 95);
		pt["Cm"] = new ElementInfo("Curium", 247, 96);
		pt["Bk"] = new ElementInfo("Berkelium", 247, 97);
		pt["Cf"] = new ElementInfo("Californium", 251, 98);
		pt["Es"] = new ElementInfo("Einsteinium", 252, 99);
		pt["Fm"] = new ElementInfo("Fermium", 257, 100);
		pt["Md"] = new ElementInfo("Mendelevium", 258, 101);
		pt["No"] = new ElementInfo("Nobellium", 259, 102);
		pt["Lr"] = new ElementInfo("Lawrencium", 262, 103);
		pt["Rf"] = new ElementInfo("Rutherfordium", 261, 104);
		pt["Db"] = new ElementInfo("Dubnium", 262, 105);
		pt["Sg"] = new ElementInfo("Seaborgium", 266, 106);
		pt["Bh"] = new ElementInfo("Borium", 264, 107);
		pt["Hs"] = new ElementInfo("Hassium", 277, 108);
		pt["Mt"] = new ElementInfo("Meitnerium", 268, 109);
		pt["Ds"] = new ElementInfo("Darmstadtium", 271, 110);
		pt["Rg"] = new ElementInfo("Roentgenium", 272, 111);
		pt["Cn"] = new ElementInfo("Copernicium", 285, 112);
		pt["Uut"] = new ElementInfo("Ununtrium", 284, 113);
		pt["Fl"] = new ElementInfo("Flerovium", 289, 114);
		pt["Uup"] = new ElementInfo("Ununpentium", 288, 115);
		pt["Lv"] = new ElementInfo("Livermorium", 292, 116);
		pt["Uus"] = new ElementInfo("Ununseptium", 294, 117);
		pt["Uuo"] = new ElementInfo("Ununoctium", 294, 118);
	}

	void deleteElement(std::string symbol)
	{
		ElementInfo* el = pt[symbol];

		pt[symbol] = NULL;

		delete el;
	}

}