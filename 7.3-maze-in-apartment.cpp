#include <iostream>
#include <string>

class Room
{
	public:
		Room(std::string n)
		{
			name = n;
			North = this;
			South = this;
			East = this;
			West = this;
		};
		std::string name;
		Room *North;
		Room *South;
		Room *East;
		Room *West;
};

int main()
{
	Room r1("Bad");
	Room r2("Schlafzimmer");
	Room r3("Wohnzimmer");
	Room r4("Esszimmer");
	Room r5("Flur");
	r1.North = &r2;
	r1.East = &r5;
	r2.South = &r1;
	r2.East = &r3;
	r3.West = &r2;
	r3.South = &r5;
	r3.East = &r4;
	r4.West = &r3;
	r5.West = &r1;
	r5.North = &r3;
	Room* here = &r1;
	bool done = false;

	do
	{
		std::cout<< "Sie sind im " << here->name << ". Es gibt Wege nach ";
		if (here->East != here) std::cout << "O ";
		if (here->West != here) std::cout << "W ";
		if (here->North != here) std::cout << "N ";
		if (here->South != here) std::cout << "S ";
		std::cout << ". Wohin? (X:exit)" << std::endl;
		std::string in;
		std::cin >> in;

		switch(toupper(in[0]))
		{
			case 'N': here = here->North; break;
			case 'S': here = here->South; break;
			case 'O': here = here->East; break;
			case 'W': here = here->West; break;
			default: done = true; std::cout << "Tschuess!\n"; break;
		}
	}
	while (!done);
	return 0;
}
