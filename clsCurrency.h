#pragma once
#include <string>

class clsCurrency
{
	std::string _country;
	std::string _currencyCode;
	std::string _currencyName;
	double _rate;

public:
	clsCurrency(const std::string& country, const std::string& code, const std::string& name, double rate);

	// Getters
	const std::string& country() const;
	const std::string& currencyCode() const;
	const std::string& currencyName() const;
	double rate() const;

	// Setters
	void setRate(double rate);
};