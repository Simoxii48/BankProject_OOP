#pragma once
#include "IClientRepository.h"
#include <string>
#include <vector>
#include "clsClient.h"
#include "ITrxService.h"


class clsClientService
{
	// Privates
	IClientRepository& _clientRepo;
	ITrxService& _trxService;

	// Publics
public:
	// Constructor
	explicit clsClientService(IClientRepository& clientRepo, ITrxService& trxService);

	// Methods
	std::vector<clsClient> getAllClients() 
		const;

	clsClient getClient(const std::string& accNum) const;

	void addClient(const clsClient& client);

	void updateClient(const clsClient& client);

	void deleteClient(const std::string& accNum);

	bool isClientExists(const std::string& accNum) const;

	void deposit(const std::string& accNum, double amount);

	void withdraw(const std::string& accNum, double amount);

	void transfer(const std::string& fromAccNum, const std::string& toAccNum, double amount);

	double getTotalBalance() const;

	bool authenticate(const std::string& accNum, const std::string& pinCode) const;

	// Destructor
	~clsClientService() = default;
};