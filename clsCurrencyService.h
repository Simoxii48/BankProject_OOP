#pragma once
#include "ICurrencyRepository.h"
#include <vector>
#include <string>
#include "clsCurrency.h"

class clsCurrencyService
{
	ICurrencyRepository& _currencyRepo;

public:
	clsCurrencyService(ICurrencyRepository& currencyRepo);

	std::vector<clsCurrency> getAllCurrencies() const;

	clsCurrency findCurrencyByName(const std::string& currencyName) const;

	clsCurrency findCurrencyByCode(const std::string& currencyCode) const;

	void updateCurrencyRate(const std::string& currencyCode, double rate);

	//double convertCurrencyFromTo(const clsCurrency& fromCurrency, const clsCurrency& toCurrency);
};