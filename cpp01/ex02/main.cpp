#include <iostream>
#include <string>

int	main(){
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Indirizzo di memoria della variabile string: " << &string << std::endl;
	std::cout << "Indirizzo di memoria contenuto in stringPTR: " << stringPTR << std::endl;
	std::cout << "Indirizzo di memoria della variabile stringREF: " << &stringREF << std::endl;

	std::cout << "Contenuto della variabile string: " << string << std::endl;
	std::cout << "Contenuto dell'indirizzo puntato da stringPTR: " << *stringPTR << std::endl;
	std::cout << "Contenuto del riferimento di stringREF: " << stringREF << std::endl;
	return(0);
}