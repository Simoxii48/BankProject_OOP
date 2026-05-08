#pragma once
#include "ITransactionRepository.h"
#include <vector>
#include "clsTransaction.h"
#include <string>

class clsTrxRepo : public ITransactionRepository
{
	// Privates
private:
	std::string _convertTrxObjectToStringRecord(const clsTransaction& trx) const;
	
	clsTransaction _convertStringRecordToTrxObj(const std::string& recordLine) const;

	std::string _getTrxType(const enType& type) const;

	enType _getType(const std::string& type) const;
	
	std::string _Delimiter = "#//#";
	std::string _fileName;

	// Publics
public:
	explicit clsTrxRepo(const std::string& filename);

	void add(const clsTransaction& trx) const override;
	
	std::vector<clsTransaction> getAll() const override;

	~clsTrxRepo() override = default;
};