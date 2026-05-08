#pragma once
#include "IUserRepository.h"
#include "IActionRepository.h"
#include "clsUser.h"
#include <vector>
#include <string>
#include "clsActionLog.h"

class clsUserService
{
private:

	IUserRepository& _repo;
	IActionRepository& _actionRepo;

public:
	static constexpr const char* ADMIN_USERNAME = "Admin";

	clsUserService(IUserRepository& repo, IActionRepository& actionRepo) : _repo(repo), _actionRepo(actionRepo) {};

	std::vector<clsUser> getAllUsers() const;

	void addUser(const clsUser& user);

	bool isUserExists(const std::string& userName) const;

	clsUser getUser(const std::string& userName) const;

	void updateUser(const clsUser& user);

	clsUser find(const std::string& userName) const;

	void updateMainMenuPermissions(clsUser& user, int permissions);

	void updateTrxMenuPermissions(clsUser& user, int permissions);

	void updateManageUsersMenuPermissions(clsUser& user, int permissions);

	void grantMainMenuPermission(clsUser& user, int permission);

	void grantTrxMenuPermission(clsUser& user, int permission);

	void grantManageUsersMenuPermission(clsUser& user, int permission);

	void updateUserPermissions(clsUser& user, int MainMenuPermissions, int TrxMenuPermissions, int ManageUsersMenuPermissions);

	void removeUser(const std::string& userName);

	bool isAdmin(const std::string& userName) const;

	bool verifyPassword(const std::string& storedHash, const std::string& input) const;

	bool login(const std::string& userName, const std::string& password,clsUser& user) const;

	void lockUser(const std::string& userName);

	void unlockUser(const std::string& userName);

	void captureAction(const clsActionLog& action) const;

	std::vector<clsActionLog> getAllActions() const;

	bool userHasMainMenuPermission(const clsUser& user, int permission) const;

	bool userHasTrxMenuPermission(const clsUser& user, int permission) const;

	bool userHasManageUsersMenuPermission(const clsUser& user, int permission) const;
};