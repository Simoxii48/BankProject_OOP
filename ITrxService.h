#pragma once
#include <string>

class ITrxService
{
public:
	virtual void deposit(const std::string& accNum, double amount) = 0;
	
	virtual void withdraw(const std::string& accNum, double amount) = 0;
	
	virtual void transfer(const std::string& fromAccNum, const std::string& toAccNum, double amount) = 0;
};