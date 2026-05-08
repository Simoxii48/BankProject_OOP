#pragma once
#include "ICurrencyRepository.h"
#include <string>
#include <vector>
#include "clsCurrency.h"

class clsCurrencyRepo : public ICurrencyRepository
{
	std::string _fileName;
	std::string _DELIM = "#//#";
	
	clsCurrency _convertLineRecordToData(const std::string& lineRecord) const;

	const std::string _convertDataToRecordLine(const clsCurrency& currency) const;

public:
	clsCurrencyRepo(const std::string& fileName);

 std::vector<clsCurrency> getAllCurrencies() const override;

 clsCurrency getCurrencyByCode(const std::string& code) const override;

 clsCurrency getCurrencyByCountry(const std::string& country) const override;

 void updateCurrencyRate(const std::string& code, double rate) override;

 void save(const std::vector<clsCurrency>& vCurrencies) const;
};