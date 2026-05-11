#pragma once
#include <string>
#include "clsClient.h"
#include "clsUser.h"

class clsBaseScreen
{
public:
	static void ShowScreenHeader(const std::string& headerText, const std::string& subHeader = "");
	
	static void printLine(const std::string& text,int length = 10);

	static void printHeaderData(const std::string& text,const std::string& sep,int length = 10,bool isMoneyValue = false, char endl = '\0');

	static void printClientHorizontally();
	static void printUserHorizontally();

	static void printClientData(const clsClient& client);

	static void printUserData(const clsUser& user);

	static void printClientVertically(const clsClient& client);

	static void printUserVertically(const clsUser& user);

	static std::string statusToString(const enAccountStatus& status);
};