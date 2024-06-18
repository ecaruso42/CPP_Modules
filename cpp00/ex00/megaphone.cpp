#include <iostream>
#include <cctype>
#include <string>

int	main(int argc, char **argv)
{
	if(argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else {
		std::string	str;
		for(int i = 1; i < argc; i++) {
			str += argv[i];
			if(i < argc - 1) {
				str += " ";
			}
		}
		for (size_t i = 0; i < str.length(); i++){
			str[i] = std::toupper(str[i]);
		}
		std::cout << str << std::endl;
	}
}