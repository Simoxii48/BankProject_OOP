#pragma once
#include "IClientRepository.h"
#include <vector>
#include "clsClient.h"
#include <string>

class clsClientRepo : public IClientRepository
{
	// Privates
	const std::string _filename;
	const std::string _Delim = "#//#";

	clsClient _convertLineRecordToObject(const std::string& lineRecord) const;
	std::string _convertObjectToLineRecord(const clsClient& client) const;

	std::string _statusToString(const enAccountStatus& status) const;

	enAccountStatus _stringToStatus(const std::string& status) const;

	std::vector<clsClient>::iterator _find(std::vector<clsClient>& vClients, const std::string& accNum);

	std::vector<clsClient>::const_iterator _find(std::vector<clsClient>& vClients, const std::string& accNum)const;

	// Publics
public:
	explicit clsClientRepo(const std::string& filename);
	std::vector<clsClient> getAll() const override;
	
	void save(const std::vector<clsClient>& vClients) override;
	
	clsClient find(const std::string& accNum) const override;

	clsClient find(const std::string& accNum, const std::string& pinCode) const override;

	bool exists(const std::string&, const std::string&) const override;

	bool exists(const std::string& accNum) const override;

	void add(const clsClient& client) override;

	void update(const clsClient& client) override;

	void remove(const std::string& accNum) override;

	double getTotalBalance() const override;
	
	~clsClientRepo() override = default;
};