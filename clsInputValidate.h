#pragma once
#include "clsDate.h"
#include <string>

using std::string;

class clsInputValidate
{

public:
	enum class enValue
	{
		Phone,
		Email
	};

	static bool isNumberBetween(int Number, int From, int To);
	
	static bool isNumberBetween(double Number, double From, double To);

	static bool isDateBetween(const clsDate& Date, const clsDate& From, const clsDate& To);

	static int readIntegerNumber(const string& Message);

	static int readIntegerNumberBetween(int from,int to,const string& Message);

	static double readDoubleNumber(const string& Message);

	static double readDoubleNumberBetween(double from, double to, const string& Message);

	static bool isValideDate(const clsDate& date);

	static string readString(const string& Message);

	static bool isValideValue(const string& str,const enValue& value);
};