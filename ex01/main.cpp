#include "phonebook.hpp"

int main()
{
	Phonebook	phonebook;
	std::string	arg;
	int			i;
	int			d;

	i = 0;
	d = 0;
	std::cout << "Welcome in the PHONEBOOK. Type ADD, SEARCH or EXIT to continue" << std::endl;
	while (1)
	{
		std::getline(std::cin, arg);
		if(std ::cin.eof())
			arg = "EXIT";
		if (arg == "ADD")
		{
			if (i == 8 || i == 7)
			{
				if(i == 8)
					i = 0;
				if(i == 7)
					d = 1;
			}
			phonebook.add_contact(i);
			i++;
		}
		else if (arg == "SEARCH")
		{
			if (d == 1)
				phonebook.display_full_phonebook();
			else
			{
					phonebook.display_phonebook(i);
			}
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