#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
		return 1;
	}

	Harl harl;
	int level = harl.filterLevel(argv[1]);
	switch (level)
	{
	case 0:
		harl.complain("DEBUG");
		std::cout << std::endl;
		harl.complain("INFO");
		std::cout << std::endl;
		harl.complain("WARNING");
		std::cout << std::endl;
		harl.complain("ERROR");
		break;
	case 1:
		harl.complain("INFO");
		std::cout << std::endl;
		harl.complain("WARNING");
		std::cout << std::endl;
		harl.complain("ERROR");
		break;
	case 2:
		harl.complain("WARNING");
		std::cout << std::endl;
		harl.complain("ERROR");
		break;
	case 3:
		harl.complain("ERROR");
		break;
	default:
		std::cout << "[Probably complaining about insignificant problems]" << std::endl;
		break;
	}
	return 0;
}
