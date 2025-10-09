


#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int main(){
	std::string sfirstInt;
	std::string ssecondInt; 
	int firstInt;
	int secondInt; 
	int comboInt;
	std::stringstream ss;
	std::stringstream converter;
	std::string wholeThing;
	std::string word;
	bool keepGoing;
	
	std::cout << "Hello World!"<< std::endl;
	std::ifstream inFile;
  	inFile.open("data.csv");
	while ( keepGoing ) {
		if (std::getline(inFile, wholeThing) ){
			keepGoing = false;
		}else{
			std::cout<<"read successful"<<std::endl;
			converter.clear();
			converter.str(wholeThing);	
			std::getline(converter, sfirstInt, ',');
			std::getline(converter, ssecondInt, ',');
			std::getline(converter, word);

			std::cout << sfirstInt << " " << ssecondInt<< " " << std::endl;
			
		}
	
	
	}
	

}


