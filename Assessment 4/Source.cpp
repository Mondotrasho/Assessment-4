#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

auto compareAlpha = [](const std::string& first, const std::string& last) //predicate for sort take 2 monster bits sort names
{
	return  first < last; //compare first name to second smallest (a) to largest (z)   hence <
};

const std::string binarySearchstrvec(const std::vector<std::string>* const array, const std::string& name)
{

	int size = array->size();

	auto tempH = (array->end())-1;//auto tempH = (array[(size - 1)]);
	auto tempL = array->begin();

	auto it = std::find(array-> begin(), array->end(), name);
	if (it == array->end())
	{
		// name not in vector
	}
	else
	{
		auto index = std::distance(array->begin(), it);
	}

	for (int i = 0; i < size; ++i)
	{
		auto sizehalf = (tempH->end() - tempL->begin())-1;//std::distance(tempL, tempH) / 2;

		if ((array->at(sizehalf) > name))
		{
			if (array->at(sizehalf) == name) { return name; }
			tempH = (array->begin());//sizehalf
		}
		else if (array->at(sizehalf) < name)
		{

			tempL = (array->begin());//sizehalf
		}
		else if (array->at(sizehalf) == name) { return name; }
	}
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
	std::sort(filevec.begin(), filevec.end());
	std::cout << filevec[20] << std::endl;
	binarySearchstrvec(&filevec, "John");


	return 0;
}

