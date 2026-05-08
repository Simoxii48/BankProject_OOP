#pragma once
#include "clsTransaction.h"
#include "ITransactionRepository.h"
#include "IClientRepository.h"
#include "ITrxService.h"
#include <vector>
#include <string>

class clsTrxService : public ITrxService
{
	ITransactionRepository& _trxRepo;
	IClientRepository& _clientRepo;

public:
	explicit clsTrxService(IClientRepository& clientRepo,ITransactionRepository& trxRepo);

	std::vector<clsTransaction> getAllTransactions() const;

	void deposit(const std::string& accNum, double amount);

	void withdraw(const std::string& accNum, double amount);

	void transfer(const std::string& fromAccNum, const std::string& toAccNum, double amount);

	void add(const clsTransaction& trx) const;
};