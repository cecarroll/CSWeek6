


#include <fstream>
#include <iostream>
#include <string>


int main(){
	int firstInt;
	int secondInt; 
	int comboInt;
	std::stringstream ss;
	std::stringstream converter;
	std::string wholeThing;
	std::string word;
	bool keepGoing;
	
	std::cout << "Hello World!"<< std::endl;
	std::ofstream inFile;
  	inFile.open("data.csv");
	while ( keepGoing ) {
		if (getline (outFile, wholeThing  ) ){
			keepGoing = false;
		}else{
			std::cout<<"read successful"<<std::endl;
			converter.clear()
			converter.str(wholeThing);	
			getline ( converter, firstInt, ",");
			getLine ( converter, secondInt, ",");
			getLine ( converter, word);

			std::cout << firstInt << " " << secondInt<< " " << std::endl;
			
		}
	
	
	}
	

}


