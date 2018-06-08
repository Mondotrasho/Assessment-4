#include <fstream>
#include <vector>
#include <string>
#include <iostream>


const std::string binarySearchstrvec( std::vector<std::string>&  array, const std::string& name)
{

	int size = array.size();
	auto sizehalf = 0;
	int tempH = array.size()-1;//(array->end())-1;//auto tempH = (array[(size - 1)]);
	int tempL = 0;//array->begin();

	while (tempL < tempH)
	{

		for (int i = 0; i < size; ++i)
		{
			sizehalf = (tempH + tempL) * 0.5;

			if (name > array[sizehalf])
			{
				tempL = (sizehalf + 1);
			}
			else if (name < array[sizehalf])
			{
				tempH = (sizehalf);
			}
			else if (array[sizehalf] == name) { return name; }

		}
		int oldtempH = 999999;
		int oldtempL = 99999;
	}
	 return "Name not Found";
}


int main()
{
	std::string line;
	std::ifstream file("File.txt");
	std::vector<std::string> filevec;
	while (std::getline(file, line))
	{
		filevec.push_back(line);
	}
	
	file.close();
	//std::sort(filevec.begin(), filevec.end());
	std::string input;
	while (input.empty()) {
		std::cout << "NOTE CASE SENSITIVE" << std::endl;
		std::cout << "Please type the name you want to check the database for :";
		std::cin >> input;
	}
	std::cout << binarySearchstrvec(filevec, input) << " Was found";


	return 0;
}

