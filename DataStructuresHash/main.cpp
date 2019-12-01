#include <iostream>
#include <fstream>
#include <string>
#include "letterToNum.h"
#include "myStack.h"
using namespace std;


long int hashAddress(string input)
{
	int address = -1;
	int diff = -1;
	int calcNum = 65535;
	int num4 = 0;
	int num5 = 0;
	int num13 = 0;
	int num14 = 0;
	int num10 = 0;
	const int strSize = input.size();

	if (strSize < 16)
	{
		diff = 16 - input.size();
		calcNum += diff;
	}

	if (strSize >= 4)
	{
		num4 = (input[3]) * letterEq(input[4]);
	}
	else if (strSize == 3)
	{
		num4 = input[3];
		num5 = 0;
	}
	else
	{
		num4 = 0;
		num5 = 0;
	}

	if (strSize >= 14)
	{
		num13 = input[12];
		num14 = input[13];
	}
	else if (strSize == 13)
	{
		num13 = input[12];
		num14 = 0;
	}
	else
	{
		num13 = 0;
		num14 = 0;
	}

	if (strSize >= 10)
	{
		num10 = (input[10]);
	}
	else
		num5 = 0;

	calcNum = calcNum + num10;
	if (calcNum == 0)
		return NULL;
	calcNum = num4 / calcNum;
	return address;
}

int main()
{
	cout << hashAddress("Carmona") << endl;
	cin.get();
}