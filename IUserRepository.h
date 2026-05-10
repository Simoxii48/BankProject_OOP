#pragma once
#include "clsUser.h"
#include <vector>
#include <string>

class IUserRepository
{
public:
	virtual std::vector<clsUser> getAllUsers() const = 0;

	virtual void save(const std::vector<clsUser>& vUsers) = 0;

	virtual clsUser find(const std::string& userName) const = 0;

	virtual bool exists(const std::string& userName) const = 0;

	virtual void add(const clsUser& user) = 0;

	virtual void remove(const std::string& userName) = 0;

	virtual void update(const clsUser& user) = 0;

	virtual ~IUserRepository() = default;
};