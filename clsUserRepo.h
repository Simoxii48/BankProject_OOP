#pragma once
#include "IUserRepository.h"
#include "clsUser.h"
#include <vector>
#include <string>

class clsUserRepo : public IUserRepository
{
private:
	std::string _fileName = "";
	std::string _DELIM = "#//#";

	clsUser _convertLineRecordToObject(const std::string& lineRecord) const;
	
	std::string _convertObjectToLineRecord(const clsUser& user) const;

	std::vector<clsUser>::const_iterator _find(const std::vector<clsUser>& vClients, const std::string& accNum) const;
	
	std::vector<clsUser>::iterator _find(std::vector<clsUser>& vClients, const std::string& accNum);

public:
	explicit clsUserRepo(const std::string& fileName);

	std::vector<clsUser> getAllUsers() const override;
	
	void save(const std::vector<clsUser>& vUsers) override;
	
	clsUser find(const std::string& userName) const override;
	
	bool exists(const std::string& userName) const override;
	
	void add(const clsUser& user) override;
	
	void remove(const std::string& userName) override;
	
	void update(const clsUser& user) override;
	
	~clsUserRepo() override = default;
};