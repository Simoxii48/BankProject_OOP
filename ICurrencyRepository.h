#pragma once
#include <vector>
#include <string>
#include "clsCurrency.h"

class ICurrencyRepository
{
public:
	virtual std::vector<clsCurrency> getAllCurrencies() const = 0;

	virtual clsCurrency getCurrencyByCode(const std::string& currencyCode) const = 0;

	virtual clsCurrency getCurrencyByCountry(const std::string& country) const = 0;

	virtual void updateCurrencyRate(const std::string& currencyCode, double rate) = 0;
};