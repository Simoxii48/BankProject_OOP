#pragma once
#include "clsPerson.h"
#include <string>


enum class enAccountStatus { Active, Closed, Suspended };

class clsClient : public clsPerson
{
	// Privates
	std::string _accNum = "";
	std::string _pinCode = "";
	double _balance = 0;

	enAccountStatus _status{};

	// Publics
public:
	// Constructor
	clsClient(const std::string& firstName, const std::string& lastName, const std::string& emailAddress, const std::string& phoneNumber,const std::string& accNum, const std::string& pinCode, double balance,enAccountStatus status);

	// Getters
	const std::string& accNum() const;
	
	const std::string& pinCode() const;
	
	double balance() const;
	
	std::string fullName() const override;

	enAccountStatus status() const;

	// Setters
	void setPinCode(const std::string& value);
	
	// Methods
	void deposit(double amount);
	
	void withdraw(double amount);

	void close();

	void suspend();

	void reactivate();

	// Destructor
	~clsClient() override = default;
};