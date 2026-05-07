#pragma once
#include <string>

class clsPerson
{
	// Privates
	std::string _firstName = "";
	std::string _lastName = "";
	std::string _emailAddress = "";
	std::string _phoneNumber = "";

	// Publics
public:
	// Constructor
	clsPerson(const std::string& firstName, const std::string& lastName, const std::string& emailAddress, const std::string& phoneNumber);

	// Getters
	const std::string& firstName() const;
	const std::string& lastName() const;
	const std::string& emailAddress() const;
	const std::string& phoneNumber() const;

	// Setters
	void setFirstName(const std::string& value);
	void setLastName(const std::string& value);
	void setEmailAddress(const std::string& value);
	void setPhoneNumber(const std::string& value);

	// Methods
	virtual std::string fullName() const = 0;

	// Destructor
	virtual ~clsPerson() = default;
};