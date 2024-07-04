#include <iostream>
#include <string>
#include <fstream>

std::string replaceSubstring(const std::string& string, const std::string& search, const std::string& replace){
	if (search.empty()){
		return string;
	}
	std::string result;
	size_t startPos = 0;
	size_t pos;

	while ((pos = string.find(search, startPos)) != std::string::npos) {
		result += string.substr(startPos, pos - startPos);
		result += replace;
		startPos = pos + search.length();
	}
	result += string.substr(startPos);
	return result;
}

int main(int argc, char **argv){
	if (argc != 4){
		std::cout << "Errore: Numero di argomenti non corretto" << std::endl;
		return 1;
	}
	std::string fileName = argv[1];
	std::string search = argv[2];
	std::string replace = argv[3];

	std::ifstream inFile(fileName.c_str());
	if (!inFile.is_open()){
		std::cout << "Errore: impossibile aprire il file: " << fileName << std::endl;
		return 1;
	}

	std::string outFileName = fileName + ".replace";
	std::ofstream outFile(outFileName.c_str());
	if (!outFile.is_open()){
		std::cout << "Errore: impossibile creare il file: " << outFileName << std::endl;
		inFile.close();
		return 1;
	}
	std::string string;
	while(std::getline(inFile, string)){
		string = replaceSubstring(string, search, replace);
		outFile << string << std::endl;
	}
	inFile.close();
	outFile.close();
	return 0;
}