#pragma once
#include <string>
	
enum class enType { Deposit, Withdrawal, Transfer };

class clsTransaction
{
	// Privates
private:
	std::string _fromAccNum = "";
	std::string _toAccNum = "";
	double _amount = 0;
	std::string _date = "";
	enType _type;
	//std::string _getTrxType(const enType& type) const;

public:
	// Publics
	// constructor
	clsTransaction(const std::string& fromAccNum, const std::string& toAccNum, double amount, const std::string& date, const enType& type);

	// Getters
	const std::string& fromAccNum() const;
	const std::string& toAccNum() const;
	double amount() const;
	const std::string& date() const;
	const enType& type() const;
	
	// Destructor
	virtual ~clsTransaction() = default;
};