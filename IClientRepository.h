#pragma once
#include "clsClient.h"
#include <vector>
#include <string>

class IClientRepository
{
public:
	virtual std::vector<clsClient> getAll() const = 0;
	
	virtual void save(const std::vector<clsClient>& vClients) = 0;

	virtual clsClient find(const std::string& id) const = 0;
	
	virtual clsClient find(const std::string& id,const std::string& pin) const = 0;

	virtual bool exists(const std::string&, const std::string&) const = 0;

	virtual bool exists(const std::string& accNum) const = 0;

	virtual void add(const clsClient& client) = 0;

	virtual void update(const clsClient& client) = 0;

	virtual void remove(const std::string& accNum) = 0;

	virtual double getTotalBalance() const = 0;
	
	virtual ~IClientRepository() = default;
};