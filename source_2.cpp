#include <iostream>
#include <array>
#include <string>
#include <vector>
using namespace std;

int lecture38()
{

	vector<int> myIntVector;
	int input;

	do
	{
		cout << "Enter positive to add, negative to quit" << endl;
		cin >> input;
		myIntVector.push_back(input);
	} while (input >= 0);
	return 0;
}

int main()
{

	lecture38();
	return 0;
}