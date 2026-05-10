#pragma once
#include "clsTransaction.h"
#include <vector>
#include <string>

class ITransactionRepository
{
public:
	virtual void add(const clsTransaction& trx) const = 0;
	virtual std::vector<clsTransaction> getAll() const = 0;

	virtual ~ITransactionRepository() = default;
};