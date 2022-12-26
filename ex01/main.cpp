#include "phonebook.hpp"

int main()
{
	Phonebook	phonebook;
	std::string	arg;
	int			i;

	i = 0;
	std::cout << "Welcome in the PHONEBOOK. Type ADD, SEARCH or EXIT to continue" << std::endl;
	while (1)
	{
		std::getline(std::cin, arg);
		if (arg == "ADD")
		{
			phonebook.add_contact(i);
			if (i == 8)
				i--;
			i++;
		}
		else if (arg == "SEARCH")
		{
			phonebook.display_full_phonebook();
			phonebook.search_contact_by_index();
				
		}
		else if (arg == "EXIT")
			exit(0);
		else
			std::cout << "Error! Insert a valid command!" << std::endl;
		std::cin.clear();
	}
	return (0);
}