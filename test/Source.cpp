#include <iostream>
#include <string>

using namespace std;

struct charSlice
{
	char x;
	char y;
};

long int asciiConvert(charSlice input)
{
	int xInt;
	int yInt;
	xInt = int(input.x);
	yInt = int(input.y);
	string xStr = to_string(xInt);
	string yStr = to_string(yInt);
	string slice = xStr + yStr;
	long int lSlice = stol(slice);
	return lSlice;
}

int main()
{
	
	//string x = string() + c + d;
	charSlice mySlice;
	mySlice.x = 'c';
	mySlice.y = 'd';
	cout << asciiConvert(mySlice);

	
	cin.get();
}